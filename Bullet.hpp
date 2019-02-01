//
//  Bullet.hpp
//  ScratchPad
//
//  Created by Jason Tran on 9/18/18.
//  Copyright © 2018 Jason Tran. All rights reserved.
//

#ifndef Bullet_hpp
#define Bullet_hpp

#include <stdio.h>
#include <cmath>

class Bullet {
public:

    /**
     * A constructor
     * Set the bullet's position, angle, and origin to where the spaceship was when the bullet was fired
     *
     * @param pos the position of the spaceship when the bullet was fired
     * @param angle the angle of the spaceship when the bullet was fired
     * @param origin the origin of the spaceship when the bullet was fired
     */
    Bullet(sf::Vector2f pos, float angle, sf::Vector2f origin);

    /**
     * @return the bullet object
     */
    sf::Sprite& getBullet();


private:
    /**
     * the spaceship object
     */
    sf::Sprite bullet;

    /**
     * texture for the bullet object
     */
    sf::Texture bullet_texture;

};



#endif /* Bullet_hpp */
