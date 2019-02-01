#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#ifndef Asteroids_hpp
#define Asteroids_hpp

/** cs6010 Asteroid Game
 Purpose: Asteroid class create both big and small asteroid**/



class Asteroid {
public:
    /**
     * default constructor:
     */
     Asteroid();

    /**
     * Constructor for bigAsteroid:
     * window's width and height are initialized
     */
     Asteroid(int radius, int width, int height, const sf::Texture* texture);

    /**
     * Constructor for smallAsteroid:
     * pos parameter will take the position of where crash occurs in order for the small asteroid to be created. window's width and height are initialized
     **/
    Asteroid(sf::Vector2f pos, int radius, int width, int height, const sf::Texture* texture);

    sf::CircleShape& getAsteroid();

    /**
     * updates the position of asteroid on the frame.
     * @param bool argument --  is the asteroid big or small.
     */
     void updateAsteroid();

private:

    /**
     * declare an asteroid with 0 radius
     */
    sf::CircleShape asteroid{0};

    /**
     * window's width and height
     */
    int window_width;
    int window_height;;

    /**
     * the speed of the asteroid
     */
    float speed_x;
    float speed_y;
};



#endif /* Asteroids_hpp */
