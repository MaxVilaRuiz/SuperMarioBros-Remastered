#include "goomba.hh"
using namespace std;


// Color codes
const int _ = -1;
const int s = pro2::beige;
const int b = pro2::black;
const int w = pro2::brown;

// clang-format off
// Goomba sprites
const vector<vector<int>> Goomba::goomba_sprite_normal1_ = {
    {_, _, _, _, w, w, w, w, _, _, _, _},
    {_, _, _, w, w, w, w, w, w, _, _, _},
    {_, _, w, b, b, w, w, b, b, w, _, _},
    {_, w, w, s, b, b, b, b, s, w, w, _},
    {w, w, w, s, b, w, w, b, s, w, w, w},
    {w, w, w, s, s, w, w, s, s, w, w, w},
    {w, w, w, w, w, w, w, w, w, w, w, w},
    {_, w, w, w, s, s, s, s, w, w, w, _},
    {_, _, _, s, s, s, s, s, s, _, _, _},
    {_, _, b, b, s, s, s, s, b, b, b, _},
    {_, b, b, b, b, _, _, b, b, b, b, b},
    {_, _, b, b, b, _, _, b, b, b, b, _},
};

const vector<vector<int>> Goomba::goomba_sprite_normal2_ = {
    {_, _, _, _, w, w, w, w, _, _, _, _},
    {_, _, _, w, w, w, w, w, w, _, _, _},
    {_, _, w, b, b, w, w, b, b, w, _, _},
    {_, w, w, s, b, b, b, b, s, w, w, _},
    {w, w, w, s, b, w, w, b, s, w, w, w},
    {w, w, w, s, s, w, w, s, s, w, w, w},
    {w, w, w, w, w, w, w, w, w, w, w, w},
    {_, w, w, w, s, s, s, s, w, w, w, _},
    {_, _, _, s, s, s, s, s, s, _, _, _},
    {_, b, b, b, s, s, s, s, b, b, _, _},
    {b, b, b, b, b, _, _, b, b, b, b, _},
    {_, b, b, b, b, _, _, b, b, b, _, _},
};

const vector<vector<int>> Goomba::goomba_sprite_squashed_ = {
    {_, _, _, _, w, w, w, w, _, _, _, _},
    {_, _, w, w, w, w, w, w, w, w, _, _},
    {w, w, b, b, b, w, w, b, b, b, w, w},
    {w, w, s, s, s, b, b, s, s, s, w, w},
    {w, w, w, w, w, w, w, w, w, w, w, w},
    {_, s, s, s, s, s, s, s, s, s, s, _},
    {_, _, _, s, s, _, _, s, s, _, _, _},
    {_, b, b, b, b, _, _, b, b, b, b, _},
};
// clang-format on