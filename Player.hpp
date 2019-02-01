
#ifndef Player_hpp
#define Player_hpp

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "Bullet.hpp"
#include <vector>


using namespace std;

class Player {
public:

    /**
     * The default constructor.
     * Sets the position of the spaceship to 0,0 on the window
     */
    Player();
    
    /**
     * A constructor
     * Sets the texture of the spaceship, sets the origin and position to the
     * middle of the window
     * @param width the width of the screen
     * @param height the height of the screen
     */
    Player(int width, int height);

    /**
     * rotates the player to the left
     */
    void rotateLeft();
    
    /**
     * rotates the player to the right
     */
    void rotateRight();
    
    /**
     * moves the player forward
     */
    void moveForward();
    
    /** Updates the player's movement
     * @param true if player is supposed to move forward
     * @param true if player is supposed to move left
     * @param true if player is supposed to move right
     */
    void updatePlayer(bool forward, bool left, bool right);

    /**
     * Draws the bullets onto a window
     * @param window the window to draw the bullets
     */
    void drawBullets(sf::RenderWindow& window);
    
    /**
     * @ returns a reference to the bullets vector
     */
    vector<Bullet>& getBullets();
    
    /**
     * Updates the movement of the bullets
     */
    void updateBullets();

    /**
     * @returns a reference to the spaceship object
     */
    sf::Sprite& getSpaceship();
    
    /**
     * pushes bullets into the bullets vector
     */
    void shoot();
    
    /**
     * resets the position of the space to the middle of the screen
     */
    void die();
    

    

private:
    
    /**
     * a private variable
     * a vector of bullets
     */
    vector<Bullet> bullets;
    
    /**
     * a private variable
     * the spaceship object
     */
    sf::Sprite spaceship;
    
    /**
     * a private variable
     * texture for the spaceship object
     */
    sf::Texture spaceship_texture;
    
    /**
     * a private variable
     * the width of the screen in pixels
     */
    int window_width; // of screen
    
    /**
     * a private variable
     * the height of the screen in pixels
     */
    int window_height; // of screen

};



#endif /* Player_hpp */
