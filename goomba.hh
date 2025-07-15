#pragma once

#include <vector>
#include "platform.hh"
#include "utils.hh"

class Goomba {
 private:
    // Sprites for the Goomba
    static const std::vector<std::vector<int>> goomba_sprite_normal1_;
    static const std::vector<std::vector<int>> goomba_sprite_normal2_;
    static const std::vector<std::vector<int>> goomba_sprite_squashed_;

    pro2::Pt pos_;                     // Initial position
    int actual_pos_ = pos_.x;          // Current X position
    int frame_ = 0;                    // Frame counter

    int travel_ = 50;            // Max distance Goomba travels left/right from start
    int speed_ = 1;              // Speed in positions per update
    int animation_speed_ = 10;   // How often to change sprite frame

    bool to_right_ = true;             // Movement direction

    bool squashed_ = false;            // Whether Goomba has been squashed
    int deadtime_ = -1;                // Frame when Goomba was squashed (-1 = alive)
};