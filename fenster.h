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

#endif
#endif /* !FENSTER_HEADER */
#endif /* FENSTER_H */