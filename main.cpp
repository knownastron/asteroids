
#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#include "Game.hpp"

using namespace std;


int main() {
    srand(time(NULL));

    int window_width = 2560, window_height = 1600;
    Game myGame{window_width, window_height};
    myGame.run();

    return 0;
}
