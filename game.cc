#include "game.hh"
using namespace pro2;


const int _ = -1;
const int w = pro2::white;
const int e = pro2::green;
const int d = pro2::dark_green;
const int b = pro2::black;

// clang-format off
const std::vector<std::vector<int>> Game::option_pointer_sprite_ = {
    {_, _, _, _, _, _, _, _, _, _, _},
    {_, _, _, _, _, _, _, w, _, _, _},
    {_, _, _, _, _, _, _, _, w, _, _},
    {_, _, _, _, _, _, _, _, _, w, _},
    {w, w, w, w, w, w, w, w, w, w, w},
    {_, _, _, _, _, _, _, _, _, w, _},
    {_, _, _, _, _, _, _, _, w, _, _},
    {_, _, _, _, _, _, _, w, _, _, _},
    {_, _, _, _, _, _, _, _, _, _, _},
};

const std::vector<std::vector<int>> Game::finish_flag_sprite_ = {
    {_, _, _, _, _, b, b, _, _, _, _, _},
    {_, _, _, _, b, e, d, b, _, _, _, _},
    {_, _, _, b, e, d, d, d, b, _, _, _},
    {_, _, _, b, d, d, d, d, b, _, _, _},
    {_, _, _, _, b, d, d, b, _, _, _, _},
    {_, _, _, _, _, b, b, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {b, w, b, w, b, w, e, _, _, _, _, _},
    {_, b, w, b, w, b, e, _, _, _, _, _},
    {_, _, b, w, b, w, e, _, _, _, _, _},
    {_, _, _, b, w, b, e, _, _, _, _, _},
    {_, _, _, _, b, w, e, _, _, _, _, _},
    {_, _, _, _, _, b, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
    {_, _, _, _, _, e, e, _, _, _, _, _},
};
// clang-format on

Game::Game(int width, int height)
    : mario_({width / 2, 150}, Keys::Up, Keys::Down, Keys::Left, Keys::Right, "mario"),
      luigi_({(width / 2) - 30, 150}, Keys::W, Keys::S, Keys::A, Keys::D, "luigi")
    {

    // Save screen size
    width_ = width;
    height_ = height;

    // Generate platforms
    platforms_.push_back(Platform(0, 300, 200, 450));
    platforms_.push_back(Platform(315, 385, 150, 161));
    platforms_.push_back(Platform(400, 600, 200, 450));
    platforms_.push_back(Platform(450, 550, 155, 166));
    platforms_.push_back(Platform(775, 875, 110, 121));
    platforms_.push_back(Platform(775, 800, 170, 181));
    platforms_.push_back(Platform(1125, 1325, 200, 450));
    platforms_.push_back(Platform(1175, 1275, 155, 166));
    platforms_.push_back(Platform(1585, 1635, 290, 301));
    platforms_.push_back(Platform(1650, 1720, 50, 61));
    platforms_.push_back(Platform(1750, 1820, 50, 61));
    platforms_.push_back(Platform(1850, 2051, 80, 91));
    platforms_.push_back(Platform(2080, 2155, 110, 121));
    platforms_.push_back(Platform(2105, 2130, 160, 171));
    platforms_.push_back(Platform(2180, 2230, 140, 151));
    platforms_.push_back(Platform(2260, 2900, 170, 420));
    platforms_.push_back(Platform(2325, 2400, 130, 141));
    platforms_.push_back(Platform(2890, 3000, 130, 141));
    platforms_.push_back(Platform(2990, 3140, 170, 420));
    platforms_.push_back(Platform(3140, 3440, 220, 420));
    platforms_.push_back(Platform(3440, 3900, 170, 420));
    platforms_.push_back(Platform(4185, 4600, 170, 420));
    platforms_.push_back(Platform(4245, 4255, 160, 170));
    for (int i = 0; i < 2; i++) platforms_.push_back(Platform(625 + 75*i, 675 + 75*i, 170 - 30*i, 181 - 30*i));
    for (int i = 0; i < 3; i++) {
        platforms_.push_back(Platform(900 + 75*i, 950 + 75*i, 140 + 30*i, 151 + 30*i));
        platforms_.push_back(Platform(1350 + 75*i, 1400 + 75*i, 230 + 30*i, 241 + 30*i));
        platforms_.push_back(Platform(1670, 1700, 290 - 80*i, 301 - 80*i));
        platforms_.push_back(Platform(2652 + 38*i, 2672 + 38*i, 110 + 20*i, 170));
    }
    for (int i = 0; i < 4; i++) {
        platforms_.push_back(Platform(1350 + 75*i, 1400 + 75*i, 170 - 30*i, 181 - 30*i));
        platforms_.push_back(Platform(2500 + 38*i, 2520 + 38*i, 150 - 20*i, 170));
        platforms_.push_back(Platform(3925 + 65*i, 3965 + 65*i, 140 - 30*i, 151 - 30*i));
    }
    for (int i = 0; i < 5; i++) platforms_.push_back(Platform(3170 + 55*i, 3190 + 55*i, 150, 161));

    // Generate coins
    coins_.push_back(Coin({345, 130}));
    coins_.push_back(Coin({820, 90}));
    for (int i = 0; i < 3; i++) {
        coins_.push_back(Coin({475 + 20*i, 135}));
        coins_.push_back(Coin({1665 + 15*i, 30}));
        coins_.push_back(Coin({2342 + 15*i, 110}));
    }
    for (int i = 0; i < 5; i++) coins_.push_back(Coin({2902 + 20*i, 110}));

    // Generate spikes
    spikes_.push_back(Spike({291, 192}));
    spikes_.push_back(Spike({400, 192}));
    for (int i = 0; i < 2; i++) {
        spikes_.push_back(Spike({991 + 9*i, 162}));
        spikes_.push_back(Spike({666 + 75*i, 162 - 30*i}));
        spikes_.push_back(Spike({2180 + 41*i, 132}));
        spikes_.push_back(Spike({2491 + 257*i, 162}));
    }
    for (int i = 0; i < 3; i++) {
        spikes_.push_back(Spike({1350 + 75*i, 222 + 30*i}));
        spikes_.push_back(Spike({1391 + 75*i, 222 + 30*i}));
        spikes_.push_back(Spike({1771 + 9*i, 42}));
        for (int j = 0; j < 3; j++) spikes_.push_back(Spike({1880 + 9*j + 57*i, 72}));
    }
    for (int i = 0; i < 4; i++) spikes_.push_back(Spike({1391 + 75*i, 162 - 30*i}));
    for (int i = 0; i < 6; i++) {
        spikes_.push_back(Spike({2520 + 38*i, 162}));
        spikes_.push_back(Spike({2529 + 38*i, 162}));
    }
    for (int i = 0; i < 33; i++) spikes_.push_back(Spike({3142 + 9*i, 212}));

    // Generate gooombas
    goombas_.push_back(Goomba({496, 189}, 60));
    goombas_.push_back(Goomba({921, 129}, 20));
    goombas_.push_back(Goomba({1071, 189}, 20));
    goombas_.push_back(Goomba({2113, 99}, 35));
    for (int i = 0; i < 2; i++) goombas_.push_back(Goomba({1171 + 100*i, 189}, 45));
    for (int i = 0; i < 4; i++) goombas_.push_back(Goomba({3491 + 100*i, 159}, 50));

    // Generate mushrooms
    mushrooms_.push_back(Mushroom({1220, 144}));
    mushrooms_.push_back(Mushroom({2112, 149}));

    // Generate stars
    stars_.push_back(Star({781, 155}));
    stars_.push_back(Star({1678, 275}));
    

    // Add platforms to finder
    for (const auto& plataform : platforms_) platform_finder_.add(&plataform);

    // Add coins to finder
    for (const auto& coin : coins_) coin_finder_.add(&coin);

    // Add spikes to finder
    for (const auto& spike : spikes_) spike_finder_.add(&spike);

    // Add mushrooms to finder
    for (const auto& mushroom : mushrooms_) mushroom_finder_.add(&mushroom);

    // Add goombas to finder
    for (const auto& goomba : goombas_) goombas_finder_.add(&goomba);

    // Add stars to finder
    for (const auto& star : stars_) star_finder_.add(&star);
}