#ifndef FENSTER_H
#define FENSTER_H

#if defined(__APPLE__)
#include <CoreGraphics/CoreGraphics.h>
#include <objc/NSObjCRuntime.h>
#include <objc/objc-runtime.h>
#elif defined(_WIN32)
#endif

#include <stdint.h>
#include <stdlib.h>
#include <string.h>

struct fenster {
    const char *title;
    const int   width;
    const int   height;
    uint32_t   *buf;
    int         keys[256]; /* keys are mostly ASCII, but arrows are 17..20 */
    int         mod;       /* mod is 4 bits mask, ctrl=1, shift=2, alt=4, meta=8 */
    int         x;
    int         y;
    int         mouse;
#if defined(__APPLE__)
    id wnd;
#elif defined(_WIN32)
    HWND hwnd;
#else
    Display *dpy;
    Window   w;
    GC       gc;
    XImage  *img;
#endif
};

#ifndef FENSTER_API
#define FENSTER_API extern
#endif
FENSTER_API int     fenster_open(struct fenster *f);
FENSTER_API int     fenster_loop(struct fenster *f);
FENSTER_API void    fenster_close(struct fenster *f);
FENSTER_API void    fenster_sleep(int64_t ms);
FENSTER_API int64_t fenster_time(void);
#define fenster_pixel(f, x, y) ((f)->buf[((y) * (f)->width) + (x)])

#ifndef FENSTER_HEADER
#if defined(__APPLE__)
#define msg(r, o, s) ((r(*)(id, SEL))objc_msgSend)(o, sel_getUid(s))
#define msg1(r, o, s, A, a) ((r(*)(id, SEL, A))objc_msgSend)(o, sel_getUid(s), a)
#define msg2(r, o, s, A, a, B, b) ((r(*)(id, SEL, A, B))objc_msgSend)(o, sel_getUid(s), a, b)
#define msg3(r, o, s, A, a, B, b, C, c) \
    ((r(*)(id, SEL, A, B, C))objc_msgSend)(o, sel_getUid(s), a, b, c)
#define msg4(r, o, s, A, a, B, b, C, c, D, d) \
    ((r(*)(id, SEL, A, B, C, D))objc_msgSend)(o, sel_getUid(s), a, b, c, d)

#define cls(x) ((id)objc_getClass(x))

extern id const NSDefaultRunLoopMode;
extern id const NSApp;

static void fenster_draw_rect(id v, SEL s, CGRect r) {
    (void)r, (void)s;
    struct fenster *f = (struct fenster *)objc_getAssociatedObject(v, "fenster");
    CGContextRef    context =
        msg(CGContextRef, msg(id, cls("NSGraphicsContext"), "currentContext"), "graphicsPort");
    CGColorSpaceRef   space = CGColorSpaceCreateDeviceRGB();
    CGDataProviderRef provider =
        CGDataProviderCreateWithData(NULL, f->buf, f->width * f->height * 4, NULL);
    CGImageRef img = CGImageCreate(f->width, f->height, 8, 32, f->width * 4, space,
                                   kCGImageAlphaNoneSkipFirst | kCGBitmapByteOrder32Little,
                                   provider, NULL, false, kCGRenderingIntentDefault);
    CGColorSpaceRelease(space);
    CGDataProviderRelease(provider);
    CGContextDrawImage(context, CGRectMake(0, 0, f->width, f->height), img);
    CGImageRelease(img);
}

static BOOL fenster_should_close(id v, SEL s, id w) {
    (void)v, (void)s, (void)w;
    msg1(void, NSApp, "terminate:", id, NSApp);
    return YES;
}

FENSTER_API int fenster_open(struct fenster *f) {
    msg(id, cls("NSApplication"), "sharedApplication");
    msg1(void, NSApp, "setActivationPolicy:", NSInteger, 0);
    f->wnd = msg4(id, msg(id, cls("NSWindow"), "alloc"),
                  "initWithContentRect:styleMask:backing:defer:", CGRect,
                  CGRectMake(0, 0, f->width, f->height), NSUInteger, 3, NSUInteger, 2, BOOL, NO);
    Class windelegate = objc_allocateClassPair((Class)cls("NSObject"), "FensterDelegate", 0);
    class_addMethod(windelegate, sel_getUid("windowShouldClose:"), (IMP)fenster_should_close,
                    "c@:@");
    objc_registerClassPair(windelegate);
    msg1(void, f->wnd, "setDelegate:", id, msg(id, msg(id, (id)windelegate, "alloc"), "init"));
    Class c = objc_allocateClassPair((Class)cls("NSView"), "FensterView", 0);
    class_addMethod(c, sel_getUid("drawRect:"), (IMP)fenster_draw_rect, "i@:@@");
    objc_registerClassPair(c);

    id v = msg(id, msg(id, (id)c, "alloc"), "init");
    msg1(void, f->wnd, "setContentView:", id, v);
    objc_setAssociatedObject(v, "fenster", (id)f, OBJC_ASSOCIATION_ASSIGN);

    id title = msg1(id, cls("NSString"), "stringWithUTF8String:", const char *, f->title);
    msg1(void, f->wnd, "setTitle:", id, title);
    msg1(void, f->wnd, "makeKeyAndOrderFront:", id, nil);
    msg(void, f->wnd, "center");
    msg1(void, NSApp, "activateIgnoringOtherApps:", BOOL, YES);
    return 0;
}

FENSTER_API void fenster_close(struct fenster *f) {
    msg(void, f->wnd, "close");
}

#endif /* ERASE */
#endif /* !FENSTER_HEADER */
#endif /* FENSTER_H */