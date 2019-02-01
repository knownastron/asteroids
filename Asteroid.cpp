#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "Asteroid.hpp"
using namespace std;
#include <iostream>
//#include <cstdlib>
#include <cmath>


Asteroid::Asteroid(){
	asteroid.setPosition(0, 0);

}

Asteroid::Asteroid(int radius, int width, int height, const sf::Texture* texture):window_width(width), window_height(height){
    asteroid.setRadius(radius);
    speed_x = float(rand()) / float(RAND_MAX) * (3 - 1) - 1;
    speed_y = float(rand()) / float(RAND_MAX) * (3 - 1) - 1;

    //create random integer 0 1 2 3 for the below randomizing initial position
    int randNum = rand() % 4;

    if (randNum == 0)
    {
        asteroid.setPosition(0,speed_x * height);
    }else if(randNum == 1){
        asteroid.setPosition(speed_y * width,0);
    }else if(randNum == 2){
        asteroid.setPosition(width, speed_y * height);
    }else if(randNum == 3){
        asteroid.setPosition(speed_x * width, height);
    }

    asteroid.setTexture(texture);
}


Asteroid::Asteroid(sf::Vector2f pos, int radius, int width, int height, const sf::Texture* texture)
: window_width(width), window_height(height)
{
    speed_x = float(rand()) / float(RAND_MAX) * (3 - 1) - 1;
    speed_y = float(rand()) / float(RAND_MAX) * (3 - 1) - 1;
    asteroid.setRadius(radius);
    asteroid.setPosition(pos);

    asteroid.setTexture(texture);
}


sf::CircleShape& Asteroid::getAsteroid(){
    return asteroid;
}


void Asteroid::updateAsteroid() {
	sf::Vector2f pos = asteroid.getPosition();
	pos.x += speed_x * 1.5;
	pos.y += speed_y * 1.5;

	if (pos.y < 0) {
		asteroid.setPosition(pos.x, window_height);
	} else if (pos.x < 0) {
		asteroid.setPosition(window_width, pos.y);
	} else if (pos.y > window_height) {
		asteroid.setPosition(pos.x, 0);
	} else if (pos.x > window_width) {
		asteroid.setPosition(0, pos.y);
	}else {
		asteroid.setPosition(pos);
	}
}
