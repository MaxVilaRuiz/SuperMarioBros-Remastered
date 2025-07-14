#pragma once

#include <vector>
#include "platform.hh"
#include "utils.hh"

class Star { 
  private:
    pro2::Pt pos_;  // Position of the star
    int frame_ = 0; // Animation frame counter
    int animation_speed_ = 7;

    // Internal sprites for animation
    static const std::vector<std::vector<int>> star_sprite_animation1_;
    static const std::vector<std::vector<int>> star_sprite_animation2_;
    static const std::vector<std::vector<int>> star_sprite_animation3_;
    static const std::vector<std::vector<int>> star_sprite_animation4_;
};