# Mario-Bros-Remastered
A 2D platformer game inspired by classic Mario titles, featuring dynamic environments, collectible items, enemies, and multiple game states for immersive gameplay.

## Description
Mario PRO2 is a side-scrolling platformer developed in C++.  
Players can control Mario (and Luigi in multiplayer mode) to collect coins, avoid hazards, defeat enemies, and reach the finish flag.  
The game includes different gameplay phases: pre-game, paused, in-game, and endgame screens with interactive menus.

## Features
- **Dynamic background** that changes based on time of day
- **Multiple objects**: platforms, coins, spikes, mushrooms, goombas, and stars
- **Star mode** with special visual indicators
- **Score and life tracking** for one or two players
- **Pregame, pause, and endgame screens** with navigable menus
- **Smooth rendering** for all in-game objects and UI elements

## Technologies
- **Language**: C++
- **Graphics Library**: `pro2::Window` (custom rendering API)
- **Data Structures**: STL containers (vectors, strings, pairs)
- **OOP Design**: Classes for game entities and UI components

## Project Structure
```
.
├── coin.cc        # Implementation of Coin entity behavior and rendering
├── coin.hh        # Header file for Coin class definition
├── fenster.h      # Window-related utilities (alternative or legacy header)
├── finder.hh      # Utility/helper for searching or iterating collections
├── game.cc        # Main Game class implementation, handles rendering and game states
├── game.hh        # Header file for Game class definition
├── geometry.hh    # Geometric structures and math utilities (e.g., Rect, Pt)
├── goomba.cc      # Implementation of Goomba enemy behavior and rendering
├── goomba.hh      # Header file for Goomba class definition
├── LICENSE        # Project license (MIT or similar)
├── list.hh        # Custom list/iterator utilities
├── main_char.cc   # Implementation of main characters (Mario & Luigi)
├── main_char.hh   # Header file for main character classes
├── main.cc        # Program entry point, initializes and runs the game
├── Makefile       # Build configuration for compiling the project
├── mushroom.cc    # Implementation of Mushroom item behavior and rendering
├── mushroom.hh    # Header file for Mushroom class definition
├── platform.cc    # Implementation of Platform entity behavior and rendering
├── platform.hh    # Header file for Platform class definition
├── README.md      # Project documentation and description
├── spike.cc       # Implementation of Spike obstacle behavior and rendering
├── spike.hh       # Header file for Spike class definition
├── star.cc        # Implementation of Star item behavior and rendering
├── star.hh        # Header file for Star class definition
├── utils.cc       # General-purpose utility functions implementation
├── utils.hh       # Header file for utility functions
├── window.cc      # Implementation of rendering wrapper (pro2::Window integration)
└── window.hh      # Header file for window/rendering system
```

## Getting Started

### Prerequisites
- C++17 or higher
- A compiler such as `g++` or `clang++`
- `pro2::Window` library (custom game framework)

### Build & Run
```bash
$ git clone https://github.com/MaxVilaRuiz/SuperMarioBros-Remastered.git
$ cd SuperMarioBros-Remastered
$ make
$ ./mario_pro2
```

## Controls

| Action      | Player 1 | Player 2 |
|-------------|----------|----------|
| Move Left   | ←        | A        |
| Move Right  | →        | D        |
| Jump        | ↑        | W        |
| Move Down   | ↓        | S        |
| Pause       | P        | P        |