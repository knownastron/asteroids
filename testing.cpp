//
//  testing.cpp
//  asteroids
//
//  Created by Jason Tran on 9/20/18.
//

#define CATCH_CONFIG_MAIN

#include <stdio.h>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "catch.hpp"
#include "Player.hpp"
#include "Asteroid.hpp"


TEST_CASE("Collision testing") {
    Player muh_player1{1000,1000};
    Asteroid muh_asteroid1{};
    Asteroid muh_asteroid2{};
    muh_player1.getPlayer().setPosition(100, 200);
    muh_asteroid1.getAsteroid().setPosition(100,200);
    muh_asteroid2.getAsteroid().setPosition(10,400);

    
    
    sf::Rect<float> playerBounds = muh_player1.getPlayer().getGlobalBounds();
    sf::Rect<float> asteroidBounds1 = muh_asteroid1.getAsteroid().getGlobalBounds();
    sf::Rect<float> asteroidBounds2 = muh_asteroid2.getAsteroid().getGlobalBounds();
    
    cout << asteroidBounds1.top << " " << asteroidBounds1.width << " " << asteroidBounds1.height << " " << asteroidBounds1.left << endl;
    cout << playerBounds.top << " " << playerBounds.width << " " << playerBounds.height << " " << playerBounds.left << endl;
    
    REQUIRE(playerBounds.intersects(asteroidBounds1) == true);
    REQUIRE(playerBounds.intersects(asteroidBounds2) == false);
    
    
}

//    cout << asteroidBounds1.top << " " << asteroidBounds1.width << " " << asteroidBounds1.height << " " << asteroidBounds1.left << endl;
//cout << playerBounds.top << " " << playerBounds.width << " " << playerBounds.height << " " << playerBounds.left << endl;
