#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "Player.hpp"
#include <cmath>
#include <vector>
#include <iostream>
#include <unistd.h>

using namespace std;
//


Player::Player(){
    spaceship.setPosition(0, 0);
}

Player::Player(int width, int height) : window_width(width), window_height(height) {
    spaceship_texture.loadFromFile("../spaceship.png");
    spaceship.setTexture(spaceship_texture);
    spaceship.setOrigin(110/2, 150/2);
    spaceship.setPosition(width/2, height/2);

}

sf::Sprite& Player::getSpaceship() {
    return spaceship;
}

vector<Bullet>& Player::getBullets() {
   return bullets;
}

void Player::rotateLeft() {
    spaceship.rotate(-.7);
}

void Player::rotateRight() {
    spaceship.rotate(.7);
}

void Player::moveForward() {
    sf::Vector2f pos = spaceship.getPosition();
    float radian = spaceship.getRotation() * M_PI/180 ;
    float y,x;
    y = cos(radian);
    x = sin(radian);
    spaceship.move(x * 2.8 , -y * 2.8);
    if (pos.y < 0) {
        spaceship.setPosition(pos.x, window_height);
    } else if (pos.x < 0) {
        spaceship.setPosition(window_width, pos.y);
    } else if (pos.y > window_height) {
        spaceship.setPosition(pos.x, 0);
    } else if (pos.x > window_width) {
        spaceship.setPosition(0, pos.y);
    }
}

void Player::updatePlayer(bool forward, bool left, bool right) {
    if (forward) moveForward();
    if (left) rotateLeft();;
    if (right) rotateRight();
}

void Player::updateBullets() {
    for (int i = 0; i < bullets.size(); i++) {
        sf::Vector2f pos = bullets[i].getBullet().getPosition();
        float direction = (bullets[i].getBullet().getRotation()) * M_PI/180;
        float y = cos(direction);
        float x = sin(direction);
        bullets[i].getBullet().move(x * 4, -y * 4);
        if (pos.x > window_width || pos.x < 0 || pos.y > window_height || pos.y < 0) {
            bullets.erase(bullets.begin() + i);
        }
    }
}

void Player::drawBullets(sf::RenderWindow& window) {
    if (bullets.size() > 0) {
        for (int i = 0; i < bullets.size(); i ++) {
            window.draw(bullets[i].getBullet());
        }
    }
}

void Player::die() {
    spaceship.setPosition(window_width/2, window_height/2);
    spaceship.setRotation(0);
}

void Player::shoot() {
    if (bullets.size() < 6) {
        bullets.push_back(Bullet{spaceship.getPosition(), spaceship.getRotation(), spaceship.getOrigin()});
    }
}
