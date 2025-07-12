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
}