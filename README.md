# CPPND: Capstone Snake Game Example

This is a starter repo for the Capstone project in the [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213). The code for this repo was inspired by [this](https://codereview.stackexchange.com/questions/212296/snake-game-in-c-with-sdl) excellent StackOverflow post and set of responses.

<img src="snake_game.gif"/>

The Capstone Project gives you a chance to integrate what you've learned throughout this program. This project will become an important part of your portfolio to share with current and future colleagues and employers.

In this project, you can build your own C++ application or extend this Snake game, following the principles you have learned throughout this Nanodegree Program. This project will demonstrate that you can independently create applications using a wide range of C++ features.

## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  >Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source. 
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.


## CC Attribution-ShareAlike 4.0 International


Shield: [![CC BY-SA 4.0][cc-by-sa-shield]][cc-by-sa]

This work is licensed under a
[Creative Commons Attribution-ShareAlike 4.0 International License][cc-by-sa].

[![CC BY-SA 4.0][cc-by-sa-image]][cc-by-sa]

[cc-by-sa]: http://creativecommons.org/licenses/by-sa/4.0/
[cc-by-sa-image]: https://licensebuttons.net/l/by-sa/4.0/88x31.png
[cc-by-sa-shield]: https://img.shields.io/badge/License-CC%20BY--SA%204.0-lightgrey.svg



***Loops, Functions, I/O***

The project demonstrates an understanding of C++ functions and control structures.

Added functions for game logic, rendering, and high score management.
The project code is clearly organized into functions.

The project accepts user name input and difficulty setting input. - main.cpp

The project reads data from an external file or writes data to a file as part of the necessary operation of the program. - game.cpp(line 49)

Implemented Game::LoadHighScores and Game::SaveHighScores to read and write high scores to/from a file.
The project accepts user input and processes the input. - game.cpp(line 47)

Controller class handles user input for controlling the snake by pausing the game. - controller.cpp(line 39)

***Object Oriented Programming (OOP)***

Game, Renderer, and other classes were added or modified with appropriate member access specifiers.
Classes are organized with attributes to hold data and methods to perform tasks.

Classes hold data members (score, playerNames, highScores) and methods to manage game state, rendering, and high scores. - game.cpp

Class constructors utilize member initialization lists. Initializing current player name in Game class constructor. - game.cpp

Classes abstract implementation details from their interfaces.
Private data members like score, highScores, playerNames, etc.
Private member functions like SetSpeed(Difficulty difficulty), LoadHighScores(), SaveHighScores(), UpdateHighScores(std::string const &playerName, int &newScore),
etc. - game.cpp

***Memory Management***

The project makes use of references in function declarations. UpdateHighScores, DisplayHighScores and SetSpeed functions in game class pass respective variables as references. - game.cpp, renderer.cpp

The project uses smart pointers instead of raw pointers.
Renderer class uses std::unique_ptr for sdl_window and sdl_renderer members. - renderer.cpp

The project uses destructors appropriately. Usage of game class destructor. - game.cpp

***Concurrency***
The project uses multithreading.
Game::Run starts a separate thread (update_thread) for updating game state asynchronously.

A mutex or lock is used in the project.
Game::Run uses std::mutex (mtx) and std::lock_guard to synchronize access to shared data (running and data_ready).

A std::condition_variable is used to coordinate the state between the main thread and the update_thread. - game.h(line 49)

This UpdateThread is used to place Penalty food and Walls in the Game.

**NEW Features Introduced**
1. High Scores Management

Implemented functionality to load, save, and display high scores.
Added sorting to keep track of top 10 scores.

2. Multithreading for Game State Updates

Introduced a separate thread for updating game state (Game::UpdateThread), allowing for smoother gameplay.

3. Enhanced Rendering with SDL

Utilized SDL rendering capabilities through Renderer class to display HighScores

4. User Interaction Improvements

Enhanced user interaction with input handling (Controller) for pausing the game.

5. Difficulty Settings

Implemented three difficulty levels (Easy, Medium, Hard) that affect the speed of the snake and challenge level.

6. Penalty Food

Implemented Penalty food which when consumed by snake reduces the player point by 1.

7. Wall

Implement walls which when the snake collides with, terminates the game.
