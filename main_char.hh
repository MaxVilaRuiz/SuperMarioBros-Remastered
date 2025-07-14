#pragma once

#include <iostream>
#include <vector>
#include <set>
#include "platform.hh"
#include "window.hh"
// #include "spike.hh"

class MainChar {
 private:
    // Physics
    pro2::Pt pos_, last_pos_, last_grounded_pos_;
    pro2::Pt speed_ = {0, 0};
    pro2::Pt accel_ = {0, 0};
    int accel_time_ = 0;

    // Walking animation
    int animation_counter_ = 0;
    int animation_speed_ = 7;

    int lives_ = 5;

    // Mushroom effect
    int growth_counter_ = 0;
    int decrease_counter_ = 0;
    bool big_ = false;

    // Star effect
    int star_counter_ = 0;
    bool star_mode_ = false;

    // Mario sprites
    static const std::vector<std::vector<int>> mario_sprite_normal_;
    static const std::vector<std::vector<int>> mario_sprite_normal_walk1_;
    static const std::vector<std::vector<int>> mario_sprite_normal_walk2_;
    static const std::vector<std::vector<int>> mario_sprite_normal_walk3_;
    static const std::vector<std::vector<int>> mario_sprite_medium_;
    static const std::vector<std::vector<int>> mario_sprite_big_;
    static const std::vector<std::vector<int>> mario_sprite_big_walk1_;
    static const std::vector<std::vector<int>> mario_sprite_big_walk2_;
    static const std::vector<std::vector<int>> mario_sprite_big_walk3_;

    // Luigi sprites
    static const std::vector<std::vector<int>> luigi_sprite_normal_;
    static const std::vector<std::vector<int>> luigi_sprite_normal_walk1_;
    static const std::vector<std::vector<int>> luigi_sprite_normal_walk2_;
    static const std::vector<std::vector<int>> luigi_sprite_normal_walk3_;
    static const std::vector<std::vector<int>> luigi_sprite_medium_;
    static const std::vector<std::vector<int>> luigi_sprite_big_;
    static const std::vector<std::vector<int>> luigi_sprite_big_walk1_;
    static const std::vector<std::vector<int>> luigi_sprite_big_walk2_;
    static const std::vector<std::vector<int>> luigi_sprite_big_walk3_;

    // Star mode
    static const std::vector<std::vector<int>> starmode_sprite_normal_;
    static const std::vector<std::vector<int>> starmode_sprite_normal_walk1_;
    static const std::vector<std::vector<int>> starmode_sprite_normal_walk2_;
    static const std::vector<std::vector<int>> starmode_sprite_normal_walk3_;
    static const std::vector<std::vector<int>> starmode_sprite_medium_;
    static const std::vector<std::vector<int>> starmode_sprite_big_;
    static const std::vector<std::vector<int>> starmode_sprite_big_walk1_;
    static const std::vector<std::vector<int>> starmode_sprite_big_walk2_;
    static const std::vector<std::vector<int>> starmode_sprite_big_walk3_;

    // Lives sprite
    static const std::vector<std::vector<int>> mario_lives_sprite_;
    static const std::vector<std::vector<int>> luigi_lives_sprite_;

    // Constructor parameters
    int jump_key_;
    int down_key_;
    int left_key_;
    int right_key_;
    std::string character_;

    bool grounded_ = false;
	bool looking_left_ = false;

    /**
     * @brief Handles movement physics.
     * @pre Speed and acceleration initialized.
     * @post Position and speed updated based on gravity and input.
     */
    void apply_physics_();
};