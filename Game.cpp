#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include "Player.hpp"
#include "Game.hpp"
#include "Bullet.hpp"
#include <vector>
#include <cstdlib>
#include <SFML/Audio.hpp>
#include<string>
using namespace std;

Game::Game() {
    myWindow.create(sf::VideoMode(1600, 900), "myWindow");
};

Game::Game(int width, int height)
: myPlayer{width, height}, window_width(width), window_height(height)
{
    myWindow.create(sf::VideoMode(width, height), "myWindow");
    if (!buffer.loadFromFile("../bangLarge.wav")){cout << "not loading" <<endl;}
    hitBullet.setBuffer(buffer);
    if (!buffer1.loadFromFile("../fire.wav")){cout << "not loading" <<endl;}
     fire.setBuffer(buffer1);
     if (!buffer2.loadFromFile("../saucerBig.wav")){cout << "not loading" <<endl;}
     die.setBuffer(buffer2);
     if (!buffer3.loadFromFile("../thrust.wav")){cout << "not loading" <<endl;}
     thrust.setBuffer(buffer3);

    background_texture.loadFromFile("../space_background.jpg");
    sf::Vector2u TextureSize = background_texture.getSize();
    sf::Vector2u WindowSize = myWindow.getSize();
    float ScaleX = (float)WindowSize.x / TextureSize.x;
    float ScaleY = (float)WindowSize.y / TextureSize.y;
    background_sprite.setTexture(background_texture);
    background_sprite.setScale(ScaleX, ScaleY);

    asteroid_texture.loadFromFile("../asteroid.jpg");
};

void Game::render() {

    myWindow.clear(sf::Color::Black);
    myWindow.draw(background_sprite);
    myWindow.draw(myPlayer.getSpaceship());
    myPlayer.drawBullets(myWindow);
    drawAsteroids();


    myWindow.display();
}

void Game::drawAsteroids(){

    for (int i = 0; i < bigAsteroids.size(); i++)
    {
        myWindow.draw(bigAsteroids[i].getAsteroid());
    }
    for (int i = 0; i < smallAsteroids.size(); i++)
    {
        myWindow.draw(smallAsteroids[i].getAsteroid());
    }
}

void Game::processEvents() {
    checkCrashes();
    sf::Event event;
    while (myWindow.pollEvent(event))
    {
                if (event.type == sf::Event::KeyPressed){
                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
                        myPlayer.shoot();
                        fire.play();
                    }

                    playerInput(event.key.code, true);
                    break;
                } else if (event.type == sf::Event::KeyReleased){
                    playerInput(event.key.code, false);
                    break;

                } else if(sf::Event::Closed){
                    myWindow.close();
                    break;
                }
        }
}

void Game::playerInput(sf::Keyboard::Key key, bool isPressed){

    if (key == sf::Keyboard::Up) {movingUp = isPressed; thrust.play();}
    else if (key == sf::Keyboard::Left) movingLeft = isPressed;
    else if (key == sf::Keyboard::Right) movingRight = isPressed;
}


void Game::update(){
    myPlayer.updatePlayer(movingUp, movingLeft, movingRight);
    myPlayer.updateBullets();
    updateAsteroids();
}

void Game::updateAsteroids(){
    if (bigAsteroids.size() < 4)
    {
       bigAsteroids.push_back(Asteroid{80, window_width, window_height, &asteroid_texture});
    }
    for (Asteroid& as: bigAsteroids)
    {
        as.updateAsteroid();
    }
    for (Asteroid& as: smallAsteroids)
    {
        as.updateAsteroid();
    }
}

void Game::checkPlayerCrash() {
    sf::Rect<float> playerBounds = myPlayer.getSpaceship().getGlobalBounds();

    for (int i = 0; i < bigAsteroids.size(); i++) {
        sf::Rect<float> bigAsteroidBounds = bigAsteroids[i].getAsteroid().getGlobalBounds();
        if (playerBounds.intersects(bigAsteroidBounds)) {
            //hitBullet.play();
            myPlayer.die();
            die.play();
            bigAsteroids.erase(bigAsteroids.begin() + i);
        }
    }
    for (int i = 0; i < smallAsteroids.size(); i++) {
        sf::Rect<float> smallAsteroidBounds = smallAsteroids[i].getAsteroid().getGlobalBounds();
        if (playerBounds.intersects(smallAsteroidBounds)) {
            myPlayer.die();
            die.play();
            smallAsteroids.erase(smallAsteroids.begin() + i);
        }
    }
}

void Game::checkBulletCrash(vector<Asteroid> &asteroids, bool isSmall) {
    vector<Bullet>& bullets = myPlayer.getBullets();
    for (int i = 0; i < bullets.size(); i++) {
        sf::Rect<float> bulletBounds = bullets[i].getBullet().getGlobalBounds();
        for (int j = 0; j < asteroids.size(); j++){
            sf::Rect<float> AsteroidBounds;
            if (isSmall) {
                AsteroidBounds = asteroids[j].getAsteroid().getGlobalBounds();
            } else {
                AsteroidBounds = asteroids[j].getAsteroid().getGlobalBounds();
            }
            if (AsteroidBounds.intersects(bulletBounds)) {
               hitBullet.play();

                if (!isSmall) {
                    splitAsteroid(asteroids[j].getAsteroid().getPosition());
                }
                asteroids.erase(asteroids.begin() + j);
                bullets.erase(bullets.begin() + i);
            }
        }
    }
}


void Game::splitAsteroid(sf::Vector2f pos) {
    for (int i = 0; i < 2; i++) {
        smallAsteroids.push_back(Asteroid{pos, 40, window_width, window_height, &asteroid_texture});
    }
}


void Game::checkCrashes() {
    checkPlayerCrash();
    checkBulletCrash(bigAsteroids, false);
    checkBulletCrash(smallAsteroids, true);
}


void Game::run() {
    while (myWindow.isOpen())
    {
        processEvents();
        update();
        render();
    }
}
