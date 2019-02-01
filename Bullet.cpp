//
//  Bullet.cpp
//  ScratchPad
//
//  Created by Jason Tran on 9/18/18.
//  Copyright © 2018 Jason Tran. All rights reserved.
//

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "Bullet.hpp"
#include <iostream>

using namespace std;

Bullet::Bullet(sf::Vector2f pos, float angle, sf::Vector2f origin) {
    bullet_texture.loadFromFile("../rocket_sprite.png");
    bullet.setTexture(bullet_texture);
    
    bullet.setPosition(pos);
    bullet.setRotation(angle);
    bullet.setOrigin(bullet.getOrigin().x + 14 , bullet.getOrigin().y);

};

sf::Sprite& Bullet::getBullet() {
    return bullet;
}
