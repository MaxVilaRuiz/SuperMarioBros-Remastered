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

void Game::process_keys(pro2::Window& window) {
    if (window.is_key_down(Keys::Escape)) {
        finished_ = true;
        return;
    }
    else if (window.was_key_pressed(Keys::P)) paused_ = !paused_; // 'P' key to pause/unpause

    // Process this keys if in pregame state
    if (pregame_) {
        if (window.was_key_pressed(Keys::Up) && *pregame_options_it_ == "2 PLAYER GAME") pregame_options_it_--;
        else if (window.was_key_pressed(Keys::Down) && *pregame_options_it_ == "1 PLAYER GAME") pregame_options_it_++;
        else if (window.was_key_pressed(Keys::Return)) {
            if (*pregame_options_it_ == "1 PLAYER GAME") single_player_ = true;
            else single_player_ = false;
            paused_ = false;
            pregame_ = false;
        }
    }

    // Process this keys if in endgame state
    if (endgame_) {
        if (window.was_key_pressed(Keys::Up) && *endgame_options_it_ != "TRY AGAIN") endgame_options_it_--;
        else if (window.was_key_pressed(Keys::Down) && *endgame_options_it_ != "QUIT") endgame_options_it_++;
        else if (window.was_key_pressed(Keys::Return)) {
            // Restore goombas
            goombas_finder_.clear();
            while (!goombas_.empty()) goombas_.pop_back();
            goombas_.push_back(Goomba({496, 189}, 60));
            goombas_.push_back(Goomba({921, 129}, 20));
            goombas_.push_back(Goomba({1071, 189}, 20));
            goombas_.push_back(Goomba({2113, 99}, 35));
            for (int i = 0; i < 2; i++) goombas_.push_back(Goomba({1171 + 100*i, 189}, 45));
            for (int i = 0; i < 4; i++) goombas_.push_back(Goomba({3491 + 100*i, 159}, 50));

            // Add objects to finder
            for (const auto& coin : coins_) coin_finder_.add(&coin);
            for (const auto& mushroom : mushrooms_) mushroom_finder_.add(&mushroom);
            for (const auto& goomba : goombas_) goombas_finder_.add(&goomba);
            for (const auto& star : stars_) star_finder_.add(&star);
            
            if (*endgame_options_it_ == "TRY AGAIN") {
                window.set_camera_topleft({0, 0});
                restarting_game_ = true;
            }
            else if (*endgame_options_it_ == "MENU") {
                window.set_camera_topleft({0, 0});
                restarting_game_ = true;
                pregame_ = true;
            }
            else finished_ = true;

            paused_ = false;
            endgame_ = false;
        }
    }
}

void Game::update_objects(pro2::Window& window) {
    // Restarting Game
    Pt cam_center = window.camera_center();
    if (restarting_game_ && (cam_center.x == int(width_ / 2) && cam_center.y == int(height_ / 2))) {
        restarting_game_ = false;
        mario_.reset_lives();
        mario_.reset_position({width_ / 2, 150});
        mario_.remove_starmode();
        immune_mario_ = false;
        num_coins_ = 0;
        if (!single_player_) {
            luigi_.reset_lives();
            luigi_.reset_position({width_ / 2 - 30, 150}); 
            luigi_.remove_starmode();
            immune_luigi_ = false;
        }
    }

    // Check if game is finished
    if (4250 < mario_.pos().x || 4250 < luigi_.pos().x) {
        endgame_ = true;
        win_ = true;
        paused_ = true;
        mario_.remove_big();
        mario_.remove_starmode();
        if (!single_player_) {
            luigi_.remove_big();
            luigi_.remove_starmode();
        }
    }

    // Update main characters
    mario_.update(window, platform_actualObj_, spike_actualObj_);
    if (!single_player_) luigi_.update(window, platform_actualObj_, spike_actualObj_);

    // Subtract lives from characters if they are out of bounds
    const int bottom_limit = window.camera_rect().bottom + 320;
    if (mario_.pos().y > bottom_limit) {
        mario_.lose_life();
        Pt mario_last_pos = mario_.last_grounded_pos();
        mario_.reset_position({mario_last_pos.x, mario_last_pos.y});
    }
    if (luigi_.pos().y > bottom_limit && !single_player_) {
        luigi_.lose_life();
        Pt luigi_last_pos = luigi_.last_grounded_pos();
        luigi_.reset_position({luigi_last_pos.x, luigi_last_pos.y});
    }

    // Finish game if a character have run out of lives
    if (mario_.lives() == 0 || luigi_.lives() == 0) {
        endgame_ = true;
        paused_ = true;
        win_ = false;
    }

    // Query visible objects
    pro2::Rect cam_rec = window.camera_rect();

    // Increase the query rectangle to preload the objects at the bottom and top of the screen
    pro2::Rect query_rec = {cam_rec.left, cam_rec.top - 160, cam_rec.right, cam_rec.bottom + 160};
    platform_actualObj_ = platform_finder_.query(query_rec);
    coin_actualObj_ = coin_finder_.query(query_rec);
    spike_actualObj_ = spike_finder_.query(query_rec);
    mushroom_actualObj_ = mushroom_finder_.query(query_rec);
    goombas_actualObj_ = goombas_finder_.query(query_rec);
    star_actualObj_ = star_finder_.query(query_rec);
    
    // Check collisions and update coins
    for (auto it = coin_actualObj_.begin(); it != coin_actualObj_.end();) {
        const Coin* c = *it;
        if (objs_collision(mario_.rect(), c->get_rect()) ||
            (objs_collision(luigi_.rect(), c->get_rect()) && !single_player_)) {
            coin_finder_.remove(c);    
            it = coin_actualObj_.erase(it);
            num_coins_++;                   
        } else {
            Coin* non_const_coin = const_cast<Coin*>(c);
            non_const_coin->update();
            ++it;
        }
    }

    // Check collisions and update mushrooms
    for (auto it = mushroom_actualObj_.begin(); it != mushroom_actualObj_.end();) {
        const Mushroom* m = *it;
        if (objs_collision(mario_.rect(), m->get_rect())) {
            mushroom_finder_.remove(m);    
            it = mushroom_actualObj_.erase(it);
            mario_.reset_lives();    
            mario_.handle_mushroom();        
        }
        else if (objs_collision(luigi_.rect(), m->get_rect()) && !single_player_) {
            mushroom_finder_.remove(m);    
            it = mushroom_actualObj_.erase(it);
            luigi_.reset_lives();      
            luigi_.handle_mushroom();      
        }
        else {
            Mushroom* non_const_coin = const_cast<Mushroom*>(m);
            non_const_coin->update();
            ++it;
        }
    }

    // Check collisions with spikes
    for (const Spike* s : spike_actualObj_) {
        if (!immune_mario_ && objs_collision(mario_.rect(), s->get_rect())) {
            immune_mario_ = true;
            immunity_mario_until_ = (mario_.is_big()) ? frame_counter_ + 1.5*immunity_interval_ 
                                    : frame_counter_ + immunity_interval_;
            mario_.lose_life();
        }

        if (!immune_luigi_ && objs_collision(luigi_.rect(), s->get_rect()) && !single_player_) {
            immune_luigi_ = true;
            immunity_luigi_until_ = (luigi_.is_big()) ? frame_counter_ + 1.5*immunity_interval_ 
                                    : frame_counter_ + immunity_interval_;
            luigi_.lose_life();
        }
    }

    // Check collisions and update goombas
    for (auto it = goombas_actualObj_.begin(); it != goombas_actualObj_.end();) {
        Goomba* goomba = const_cast<Goomba*>(*it);
        const pro2::Rect goomba_rect = goomba->get_rect();
        bool remove = false;

        if (goomba->is_squashed() && goomba->get_deadtime() <= frame_counter_) {
            goombas_finder_.remove(goomba);
            it = goombas_actualObj_.erase(it);
            continue;
        }
    
        // Mario' collision
        if (objs_collision(mario_.rect(), goomba_rect)) {
            if (mario_.rect().bottom <= goomba_rect.top + 5) {
                if (!goomba->is_squashed()) {
                    goomba->hit_from_above(frame_counter_);
                    mario_.set_grounded(true);
                }
            }
            else if (!immune_mario_ && !goomba->is_squashed()) {
                immune_mario_ = true;
                immunity_mario_until_ = (mario_.is_big()) ? frame_counter_ + 1.5*immunity_interval_ 
                                        : frame_counter_ + immunity_interval_;
                mario_.lose_life();
            }
        }

        // Luigi' collision
        if (objs_collision(luigi_.rect(), goomba_rect) && !single_player_) {
            if (luigi_.rect().bottom <= goomba_rect.top + 5) {
                if (!goomba->is_squashed()) {
                    goomba->hit_from_above(frame_counter_);
                    luigi_.set_grounded(true);
                }
            } 
            else if (!immune_luigi_ && !goomba->is_squashed()) {
                immune_luigi_ = true;
                immunity_luigi_until_ = (luigi_.is_big()) ? frame_counter_ + 1.5*immunity_interval_ 
                                        : frame_counter_ + immunity_interval_;
                luigi_.lose_life();
            }
        }
    
        goomba->update();
        it++;
    }

    // Check collisions and update stars
    for (auto it = star_actualObj_.begin(); it != star_actualObj_.end();) {
        const Star* s = *it;
        if (objs_collision(mario_.rect(), s->get_rect())) {
            star_finder_.remove(s);    
            it = star_actualObj_.erase(it);
            mario_.handle_star();           
        }
        else if (objs_collision(luigi_.rect(), s->get_rect()) && !single_player_) {
            star_finder_.remove(s);    
            it = star_actualObj_.erase(it);
            luigi_.handle_star();          
        }
        else {
            Star* non_const_star = const_cast<Star*>(s);
            non_const_star->update();
            ++it;
        }
    }
}