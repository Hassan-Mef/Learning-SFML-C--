#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std; 


sf::RectangleShape random()
{
    sf::CircleShape shape(250.f);
    shape.setFillColor(sf::Color::Green);
    sf::RectangleShape rectang(sf::Vector2f(20, 20));
    rectang.setPosition(100, 100);
    rectang.setFillColor(sf::Color::Blue);
    float speed = 1.0f; // Adjust this value to control the speed
    float gravity = -5.0f; // Adjust this value to control the
    bool collision = false;




    



    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        rectang.rotate(-speed);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        rectang.move(speed, 0);
    }

	return rectang;

    

}