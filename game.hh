#pragma once

#include <vector>
#include <set>
#include <vector>
#include "main_char.hh"
#include "platform.hh"
#include "coin.hh"
#include "window.hh"
#include "utils.hh"
#include "finder.hh"
#include "goomba.hh"
#include "spike.hh"
#include "mushroom.hh"
#include "star.hh"
#include "list.hh"

class Game {
    static constexpr int sky_blue = 0x5c94fc;       // Main background color
    static constexpr int sky_dark = 0x0C134F;       // Secondary background color
    
    // Players
    MainChar mario_;                                // Main player
    MainChar luigi_;                                // Second player

    // Platforms
    List<Platform> platforms_;                      // All platforms
    Finder<Platform> platform_finder_;              // Platform finder
    std::set<const Platform*> platform_actualObj_;  // Platforms in view

    // Coins
    List<Coin> coins_;                              // All coins
    Finder<Coin> coin_finder_;                      // Coin finder
    std::set<const Coin*> coin_actualObj_;          // Coins in view
    int num_coins_ = 0;                             // Collected coins

    // Spikes
    List<Spike> spikes_;                            // All Spike
    Finder<Spike> spike_finder_;                    // Spike finder
    std::set<const Spike*> spike_actualObj_;        // Spike in view

    // Mushrooms
    List<Mushroom> mushrooms_;                      // All Mushrooms
    Finder<Mushroom> mushroom_finder_;              // Mushroom finder
    std::set<const Mushroom*> mushroom_actualObj_;  // Mushroom in view

    // Goombas
    List<Goomba> goombas_;                          // All Goombas
    Finder<Goomba> goombas_finder_;                 // Goombas finder
    std::set<const Goomba*> goombas_actualObj_;     // Goombas in view

    // Stars
    List<Star> stars_;                              // All Stars
    Finder<Star> star_finder_;                      // Star finder
    std::set<const Star*> star_actualObj_;          // Star in view
};