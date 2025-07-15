#pragma once

#include <vector>
#include "platform.hh"
#include "utils.hh"

class Coin { 
  private:
    pro2::Pt pos_;  // Position of the coin
    int frame_ = 0; // Animation frame counter
    int animation_speed_ = 7;

    // Internal sprites for animation
    static const std::vector<std::vector<int>> coin_sprite_animation1_;
    static const std::vector<std::vector<int>> coin_sprite_animation2_;
    static const std::vector<std::vector<int>> coin_sprite_animation3_;
    static const std::vector<std::vector<int>> coin_sprite_animation4_;
    static const std::vector<std::vector<int>> coin_sprite_animation5_;
    static const std::vector<std::vector<int>> coin_sprite_animation6_;
    static const std::vector<std::vector<int>> coin_sprite_animation7_;
    static const std::vector<std::vector<int>> coin_sprite_animation8_;
    static const std::vector<std::vector<int>> coin_sprite_animation9_;
    static const std::vector<std::vector<int>> coin_sprite_back_;
};