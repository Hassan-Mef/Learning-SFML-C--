#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;



int main()
{
    sf::RenderWindow window(sf::VideoMode(500, 500), "Survival");
    window.setFramerateLimit(30);
    sf::Texture texture;
    
    sf::Sprite sprite;
    sf::Sprite sprite1;
    sf::Sprite sprite2;


    texture.loadFromFile("texture/brick.jpeg");
    sprite.setTexture(texture);
    sprite.setTextureRect(sf::IntRect(0, 0, 64, 64));

    sprite1.setTexture(texture);
    sprite1.setTextureRect(sf::IntRect(128, 128, 64, 64));

	sprite2.setTexture(texture);
    sprite2.setTextureRect(sf::IntRect(120, 64, 64, 64));


    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear(); 
		//window.draw(sprite);
       // window.draw(sprite1);
        window.draw(sprite2);



        window.display();
    }

    return 0;
}
