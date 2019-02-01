#ifndef Game_hpp
#define Game_hpp
#include "Player.hpp"
#include "Asteroid.hpp"
#include <vector>
#include <SFML/Audio.hpp>
#include<string>

using namespace std;

class Game {
public:
    void run();
    Game(); // default constructor
    Game(int width, int height);

private:
    /**
     * a private variable
     * An instance of the Player class
     */
    Player myPlayer;

    /**
     * a private variable
     * An instance of the RenderWindow class
     */
    sf::RenderWindow myWindow;

    /**
     * a private variable
     * A vector of the big asteroids
     */
    vector<Asteroid> bigAsteroids;

    /**
     * a private variable
     * A vector of the small asteroids
     */
    vector<Asteroid> smallAsteroids;

    /**
     * a private variable
     * a sprite for the background
     */
    sf::Sprite background_sprite;

    /**
     * a private variable
     * texture for the background object
     */
    sf::Texture background_texture;

    /**
     * a private variable
     * texture for the asteroid object
     */
    sf::Texture asteroid_texture;

    /**
     * a private variable
     * the width of the screen in pixels
     */
    int window_width;

    /**
     * a private variable
     * the height of the screen in pixels
     */
    int window_height;


     sf::SoundBuffer buffer;
     sf::Sound hitBullet;
     sf::SoundBuffer buffer1;
    sf::Sound fire;
    sf::SoundBuffer buffer2;
      sf::Sound die;
      sf::SoundBuffer buffer3;
      sf::Sound thrust;



   //void playmusicfunction(sf::Sound &music);


    /**
     * renders the background, spaceship, asteroids, bullets
     * onto myWindow
     */
    void render();

    /**
     * Processes new events like crashes and player input
     */
    void processEvents();

    /**
     * Processes player input
     */
    void playerInput(sf::Keyboard::Key key,bool isPressed);

    /**
     * Updates the movement and addition/removal of all the objects on the screen
     */
    void update();

    /**
     * updates the movement and addition/removal of the asteroids
     */
    void updateAsteroids();

    /**
     * draws the asteroids on myWindow
     */
    void drawAsteroids();

    /**
     * creates two new small asteroids at the location of the large asteroid that was destroyed
     */
    void splitAsteroid(sf::Vector2f pos);

    /**
     * Checks if the player has crashed into an asteroid
     */
    void checkPlayerCrash();

    /**
     * Calls the functions that check the crashes of all asteroids with the spaceship or the bullets
     */
    void checkCrashes();

    /**
     * checks if the bullet has crashed with the elements in the asteroids vector
     * @param asteroids a reference to a vector of astroids
     * @param true if the vector we are checking is smallAsteroids, false otherwise
     */
    void checkBulletCrash(vector<Asteroid> &asteroids, bool isSmall);

    /**
     * a public variable.
     * true if the spaceship is moving in the direction of the variable name
     */
    bool movingLeft, movingUp, movingRight;

};



#endif /* Game_hpp */
