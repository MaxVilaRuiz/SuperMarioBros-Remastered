#include "star.hh"
using namespace std;
using namespace pro2;


const int _ = -1;
const int b = pro2::black;
const int r = pro2::red;
const int o = pro2::orange;
const int y = pro2::yellow; 
const int g = pro2::green;
const int u = pro2::blue;
const int p = pro2::purple;

// clang-format off
const vector<vector<int>> Star::star_sprite_front = {
    {_, _, _, _, _, _, b, _, _, _, _, _, _},
    {_, _, _, _, _, b, r, b, _, _, _, _, _},
    {_, _, _, _, _, b, r, b, _, _, _, _, _},
    {_, _, _, _, b, r, r, o, b, _, _, _, _},
    {_, _, _, _, b, r, o, o, b, _, _, _, _},
    {b, b, b, b, r, o, o, y, y, b, b, b, b},
    {b, r, r, r, o, b, y, b, g, g, u, p, b},
    {_, b, r, o, o, b, y, b, g, u, p, b, _},
    {_, _, b, o, y, y, g, g, u, u, b, _, _},
    {_, _, b, y, y, g, g, u, u, p, b, _, _},
    {_, b, y, y, g, g, b, u, p, p, p, b, _},
    {_, b, y, g, b, b, _, b, b, p, p, b, _},
    {b, y, g, b, _, _, _, _, _, b, p, p, b},
    {b, b, b, _, _, _, _, _, _, _, b, b, b},    
};
const vector<vector<int>> Star::star_sprite_animation1_ = {
    {_, _, _, _, _, _, b, _, _, _, _, _, _},
    {_, _, _, _, _, b, r, b, _, _, _, _, _},
    {_, _, _, _, _, b, r, b, _, _, _, _, _},
    {_, _, _, _, b, r, r, o, b, _, _, _, _},
    {_, _, _, _, b, r, r, o, b, _, _, _, _},
    {_, b, b, b, b, r, o, o, b, b, b, b, _},
    {_, b, r, r, r, o, o, y, y, g, u, b, _},
    {_, _, b, r, o, o, y, y, g, u, b, _, _},
    {_, _, _, b, o, y, y, g, u, b, _, _, _},
    {_, _, _, b, y, y, g, u, u, b, _, _, _},
    {_, _, b, y, y, g, b, u, u, p, b, _, _},
    {_, _, b, y, g, b, _, b, p, p, b, _, _},
    {_, b, y, g, b, _, _, _, b, p, p, b, _},
    {_, b, b, b, _, _, _, _, _, b, b, b, _}, 
};
const vector<vector<int>> Star::star_sprite_animation2_ = {
    {_, _, _, _, _, _, b, _, _, _, _, _, _},
    {_, _, _, _, _, b, r, b, _, _, _, _, _},
    {_, _, _, _, _, b, r, b, _, _, _, _, _},
    {_, _, _, _, _, b, o, b, _, _, _, _, _},
    {_, _, _, _, b, r, o, y, b, _, _, _, _},
    {_, _, b, b, b, o, y, g, b, b, b, _, _},
    {_, _, b, r, r, o, y, g, u, u, b, _, _},
    {_, _, _, b, r, o, y, g, u, b, _, _, _},
    {_, _, _, _, b, o, y, g, b, _, _, _, _},
    {_, _, _, _, b, o, g, u, b, _, _, _, _},
    {_, _, _, b, o, y, b, p, p, b, _, _, _},
    {_, _, _, b, y, b, _, b, p, b, _, _, _},
    {_, _, b, y, y, b, _, b, p, p, b, _, _},
    {_, _, b, b, b, _, _, _, b, b, b, _, _}, 
};
const vector<vector<int>> Star::star_sprite_animation3_ = {
    {_, _, _, _, _, _, b, _, _, _, _, _, _},
    {_, _, _, _, _, _, b, _, _, _, _, _, _},
    {_, _, _, _, _, b, r, b, _, _, _, _, _},
    {_, _, _, _, _, b, r, b, _, _, _, _, _},
    {_, _, _, _, _, b, o, b, _, _, _, _, _},
    {_, _, _, b, b, r, o, y, b, b, _, _, _},
    {_, _, _, b, r, r, o, y, g, b, _, _, _},
    {_, _, _, _, b, o, o, y, b, _, _, _, _},
    {_, _, _, _, b, o, y, g, b, _, _, _, _},
    {_, _, _, _, b, y, g, u, b, _, _, _, _},
    {_, _, _, _, b, g, b, u, b, _, _, _, _},
    {_, _, _, b, y, b, _, b, p, b, _, _, _},
    {_, _, _, b, g, b, _, b, p, b, _, _, _},
    {_, _, _, b, b, _, _, _, b, b, _, _, _}, 
};
const vector<vector<int>> Star::star_sprite_animation4_ = {
    {_, _, _, _, _, _, _, _, _, _, _, _, _},
    {_, _, _, _, _, _, b, _, _, _, _, _, _},
    {_, _, _, _, _, _, b, _, _, _, _, _, _},
    {_, _, _, _, _, _, b, _, _, _, _, _, _},
    {_, _, _, _, _, _, b, _, _, _, _, _, _},
    {_, _, _, _, _, _, b, _, _, _, _, _, _},
    {_, _, _, _, _, _, b, _, _, _, _, _, _},
    {_, _, _, _, _, _, b, _, _, _, _, _, _},
    {_, _, _, _, _, _, b, _, _, _, _, _, _},
    {_, _, _, _, _, _, b, _, _, _, _, _, _},
    {_, _, _, _, _, _, b, _, _, _, _, _, _},
    {_, _, _, _, _, _, b, _, _, _, _, _, _},
    {_, _, _, _, _, _, b, _, _, _, _, _, _},
    {_, _, _, _, _, _, _, _, _, _, _, _, _},
};
// clang-format on