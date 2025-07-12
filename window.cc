// <HUGE-WARNING>: This #include has to be first, don't move it!
#include "fenster.h"
// </HUGE-WARNING>

#include "window.hh"
using std::string;

namespace pro2 {
    Window::Window(string title, int width, int height, int zoom)
    : fenster_{.title = title.c_str(), .width = width * zoom, .height = height * zoom},
      zoom_(zoom),
      pixels_size_(width * height * zoom * zoom)  //
{
    pixels_ = new uint32_t[width * height * zoom * zoom];
    fenster_.buf = pixels_;
    fenster_open(&fenster_);
    last_time_ = fenster_time();
}

// TODO
// void Window::update_camera_() {
//     if (topleft_.x < topleft_target_.x) {
//         topleft_.x += std::min(camera_speed_, topleft_target_.x - topleft_.x);
//     } else if (topleft_.x > topleft_target_.x) {
//         topleft_.x -= std::min(camera_speed_, topleft_.x - topleft_target_.x);
//     }

//     if (topleft_.y < topleft_target_.y) {
//         topleft_.y += std::min(camera_speed_, topleft_target_.y - topleft_.y);
//     } else if (topleft_.y > topleft_target_.y) {
//         topleft_.y -= std::min(camera_speed_, topleft_.y - topleft_target_.y);
//     }
// }

bool Window::next_frame() {
    update_camera_();
    int wait = int(1000.0 / fps_) - (fenster_time() - last_time_);
    if (wait > 0) {
        fenster_sleep(wait);
    }
    last_time_ = fenster_time();
    frame_count_++;

    // Copy the keys array
    for (size_t i = 0; i < 256; i++) {
        last_keys_[i] = fenster_.keys[i];
    }
    last_mouse_ = fenster_.mouse;

    return fenster_loop(&fenster_) == 0;
}

void Window::clear(Color color) {
    for (size_t i = 0; i < pixels_size_; i++) {
        pixels_[i] = color;
    }
}
}