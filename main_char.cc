#include "main_char.hh"
#include "utils.hh"
using namespace std;
using namespace pro2;


// Color codes
const int _ = -1;
const int r = pro2::red;
const int s = pro2::beige;
const int b = pro2::blue;
const int y = pro2::yellow;
const int h = pro2::black;
const int g = pro2::gray;
const int w = pro2::brown;
const int e = pro2::green;
const int i = pro2::white;
const int o = pro2::orange;
const int p = pro2::purple;

// clang-format off
// Mario sprites
const vector<vector<int>> MainChar::mario_sprite_normal_ = {
    {_, _, _, r, r, r, r, r, _, _, _, _},
    {_, _, r, r, r, r, r, r, r, r, r, _},
    {_, _, h, h, h, s, s, h, s, _, _, _},
    {_, h, s, h, s, s, s, h, s, s, s, _},
    {_, h, s, h, h, s, s, s, h, s, s, s},
    {_, h, h, s, s, s, s, h, h, h, h, _},
    {_, _, _, s, s, s, s, s, s, s, _, _},
    {_, _, r, r, b, r, r, r, _, _, _, _},
    {_, r, r, r, b, r, r, b, r, r, r, _},
    {r, r, r, r, b, b, b, b, r, r, r, r},
    {g, g, r, b, y, b, b, y, b, r, g, g},
    {g, g, g, b, b, b, b, b, b, g, g, g},
    {g, g, b, b, b, b, b, b, b, b, g, g},
    {_, _, b, b, b, _, _, b, b, b, _, _},
    {_, w, w, w, _, _, _, _, w, w, w, _},
    {w, w, w, w, _, _, _, _, w, w, w, w},
};
const vector<vector<int>> MainChar::mario_sprite_medium_ = {
    {_, _, _, r, r, r, r, r, _, _, _, _},
    {_, _, r, r, r, r, r, r, r, r, r, _},
    {_, _, h, h, h, s, s, h, s, _, _, _},
    {_, h, s, h, s, s, s, h, s, s, s, _},
    {_, h, s, h, h, s, s, s, h, s, s, s},
    {_, h, h, s, s, s, s, h, h, h, h, _},
    {_, _, _, s, s, s, s, s, s, s, _, _},
    {_, _, r, r, b, r, r, r, _, _, _, _},
    {_, r, r, r, b, r, r, b, r, r, r, _},
    {r, r, r, r, b, b, b, b, r, r, r, r},
    {r, r, r, b, y, b, b, y, b, r, r, r},
    {g, g, b, b, b, b, b, b, b, b, g, g},
    {g, g, g, b, b, b, b, b, b, g, g, g},
    {g, g, b, b, b, b, b, b, b, b, g, g},
    {_, _, b, b, b, _, _, b, b, b, _, _},
    {_, _, b, b, b, _, _, b, b, b, _, _},
    {_, w, w, w, _, _, _, _, w, w, w, _},
    {w, w, w, w, _, _, _, _, w, w, w, w},
};
const vector<vector<int>> MainChar::mario_sprite_big_ = {
    {_, _, _, r, r, r, r, r, _, _, _, _},
    {_, _, r, r, r, r, r, r, r, r, r, _},
    {_, _, h, h, h, s, s, h, s, _, _, _},
    {_, h, s, h, s, s, s, h, s, s, s, _},
    {_, h, s, h, h, s, s, s, h, s, s, s},
    {_, h, h, s, s, s, s, h, h, h, h, _},
    {_, _, _, s, s, s, s, s, s, s, _, _},
    {_, _, r, r, b, r, r, r, _, _, _, _},
    {_, r, r, r, b, r, r, b, r, r, r, _},
    {r, r, r, r, b, b, b, b, r, r, r, r},
    {r, r, r, b, b, b, b, b, b, r, r, r},
    {r, r, b, b, y, b, b, y, b, b, r, r},
    {g, g, b, b, b, b, b, b, b, b, g, g},
    {g, g, g, b, b, b, b, b, b, g, g, g},
    {g, g, b, b, b, b, b, b, b, b, g, g},
    {_, _, b, b, b, _, _, b, b, b, _, _},
    {_, _, b, b, b, _, _, b, b, b, _, _},
    {_, _, b, b, b, _, _, b, b, b, _, _},
    {_, w, w, w, _, _, _, _, w, w, w, _},
    {w, w, w, w, _, _, _, _, w, w, w, w},
};
const vector<vector<int>> MainChar::mario_sprite_normal_walk1_ = {
    {_, _, _, r, r, r, r, r, _, _, _, _},
    {_, _, r, r, r, r, r, r, r, r, r, _},
    {_, _, h, h, h, s, s, h, s, _, _, _},
    {_, h, s, h, s, s, s, h, s, s, s, _},
    {_, h, s, h, h, s, s, s, h, s, s, s},
    {_, h, h, s, s, s, s, h, h, h, h, _},
    {_, _, _, s, s, s, s, s, s, s, _, _},
    {_, _, r, r, b, r, r, r, _, _, _, _},
    {_, r, r, r, b, r, r, b, r, r, r, _},
    {r, r, r, r, b, b, b, b, r, r, r, r},
    {g, g, r, b, y, b, b, y, b, r, g, g},
    {g, g, g, b, b, b, b, b, b, g, g, g},
    {g, g, b, b, b, b, b, b, b, b, g, g},
    {_, _, b, b, b, _, _, b, b, b, _, _},
    {_, w, w, w, _, _, _, _, w, w, w, _},
    {_, w, w, w, w, _, _, _, w, w, w, w},
};
const vector<vector<int>> MainChar::mario_sprite_normal_walk2_ = {
    {_, _, _, r, r, r, r, r, _, _, _, _},
    {_, _, r, r, r, r, r, r, r, r, r, _},
    {_, _, h, h, h, s, s, h, s, _, _, _},
    {_, h, s, h, s, s, s, h, s, s, s, _},
    {_, h, s, h, h, s, s, s, h, s, s, s},
    {_, h, h, s, s, s, s, h, h, h, h, _},
    {_, _, _, s, s, s, s, s, s, s, _, _},
    {_, _, _, r, b, r, r, r, r, _, _, _},
    {_, _, r, r, b, r, r, b, r, r, _, _},
    {_, _, r, r, b, b, b, b, r, r, _, _},
    {_, _, g, g, b, b, b, y, b, r, _, _},
    {_, _, g, g, g, b, b, b, b, g, _, _},
    {_, _, g, g, b, b, b, b, b, b, _, _},
    {_, _, b, b, b, _, _, b, b, b, _, _},
    {_, _, w, w, w, _, _, w, w, w, _, _},
    {_, _, w, w, w, w, _, w, w, w, w, _},
};
const vector<vector<int>> MainChar::mario_sprite_normal_walk3_ = {
    {_, _, _, r, r, r, r, r, _, _, _, _},
    {_, _, r, r, r, r, r, r, r, r, r, _},
    {_, _, h, h, h, s, s, h, s, _, _, _},
    {_, h, s, h, s, s, s, h, s, s, s, _},
    {_, h, s, h, h, s, s, s, h, s, s, s},
    {_, h, h, s, s, s, s, h, h, h, h, _},
    {_, _, _, s, s, s, s, s, s, s, _, _},
    {_, _, _, b, b, r, r, b, b, _, _, _},
    {_, _, _, b, b, r, r, b, b, _, _, _},
    {_, _, _, b, b, r, r, b, b, _, _, _},
    {_, _, _, b, b, g, g, b, b, _, _, _},
    {_, _, b, b, b, g, g, g, b, b, _, _},
    {_, _, b, b, b, g, g, b, b, b, _, _},
    {_, _, _, _, b, b, b, b, _, _, _, _},
    {_, _, _, _, w, w, w, w, _, _, _, _},
    {_, _, _, _, w, w, w, w, w, _, _, _},
};
const vector<vector<int>> MainChar::mario_sprite_big_walk1_ = {
    {_, _, _, r, r, r, r, r, _, _, _, _},
    {_, _, r, r, r, r, r, r, r, r, r, _},
    {_, _, h, h, h, s, s, h, s, _, _, _},
    {_, h, s, h, s, s, s, h, s, s, s, _},
    {_, h, s, h, h, s, s, s, h, s, s, s},
    {_, h, h, s, s, s, s, h, h, h, h, _},
    {_, _, _, s, s, s, s, s, s, s, _, _},
    {_, _, r, r, b, r, r, r, _, _, _, _},
    {_, r, r, r, b, r, r, b, r, r, r, _},
    {r, r, r, r, b, b, b, b, r, r, r, r},
    {r, r, r, b, b, b, b, b, b, r, r, r},
    {r, r, b, b, y, b, b, y, b, b, r, r},
    {g, g, b, b, b, b, b, b, b, b, g, g},
    {g, g, g, b, b, b, b, b, b, g, g, g},
    {g, g, b, b, b, b, b, b, b, b, g, g},
    {_, _, b, b, b, _, _, b, b, b, _, _},
    {_, _, b, b, b, _, _, b, b, b, _, _},
    {_, _, b, b, b, _, _, b, b, b, _, _},
    {_, w, w, w, _, _, _, _, w, w, w, _},
    {_, w, w, w, w, _, _, _, w, w, w, w},
};
const vector<vector<int>> MainChar::mario_sprite_big_walk2_ = {
    {_, _, _, r, r, r, r, r, _, _, _, _},
    {_, _, r, r, r, r, r, r, r, r, r, _},
    {_, _, h, h, h, s, s, h, s, _, _, _},
    {_, h, s, h, s, s, s, h, s, s, s, _},
    {_, h, s, h, h, s, s, s, h, s, s, s},
    {_, h, h, s, s, s, s, h, h, h, h, _},
    {_, _, _, s, s, s, s, s, s, s, _, _},
    {_, _, _, r, b, r, r, r, r, _, _, _},
    {_, _, r, r, b, r, r, b, r, r, _, _},
    {_, _, r, r, b, r, r, b, r, r, _, _},
    {_, _, r, r, b, b, b, b, r, r, _, _},
    {_, _, b, b, b, b, b, y, b, r, _, _},
    {_, _, g, g, b, b, b, b, b, r, _, _},
    {_, _, g, g, g, b, b, b, b, g, _, _},
    {_, _, g, g, b, b, b, b, b, b, _, _},
    {_, _, b, b, b, _, _, b, b, b, _, _},
    {_, _, b, b, b, _, _, b, b, b, _, _},
    {_, _, b, b, b, _, _, b, b, b, _, _},
    {_, _, w, w, w, _, _, w, w, w, _, _},
    {_, _, w, w, w, w, _, w, w, w, w, _},
};
const vector<vector<int>> MainChar::mario_sprite_big_walk3_ = {
    {_, _, _, r, r, r, r, r, _, _, _, _},
    {_, _, r, r, r, r, r, r, r, r, r, _},
    {_, _, h, h, h, s, s, h, s, _, _, _},
    {_, h, s, h, s, s, s, h, s, s, s, _},
    {_, h, s, h, h, s, s, s, h, s, s, s},
    {_, h, h, s, s, s, s, h, h, h, h, _},
    {_, _, _, s, s, s, s, s, s, s, _, _},
    {_, _, _, b, b, r, r, b, b, _, _, _},
    {_, _, _, b, b, r, r, b, b, _, _, _},
    {_, _, _, b, b, r, r, b, b, _, _, _},
    {_, _, _, b, b, r, r, b, b, _, _, _},
    {_, _, _, b, b, g, g, b, b, _, _, _},
    {_, _, b, b, b, g, g, g, b, b, _, _},
    {_, _, b, b, b, g, g, b, b, b, _, _},
    {_, _, b, b, b, g, g, b, b, b, _, _},
    {_, _, _, _, b, b, b, b, _, _, _, _},
    {_, _, _, _, b, b, b, b, _, _, _, _},
    {_, _, _, _, b, b, b, b, _, _, _, _},
    {_, _, _, _, w, w, w, w, _, _, _, _},
    {_, _, _, _, w, w, w, w, w, _, _, _},
};