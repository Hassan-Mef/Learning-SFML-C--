#pragma once

#include <SFML/Graphics.hpp>

sf::VertexArray Shapes()
{
	sf::VertexArray triangle(sf::Triangles, 3);

	triangle[0].position = sf::Vector2f(150.f, 100);
	triangle[1].position = sf::Vector2f(100.f, 200);
	triangle[2].position = sf::Vector2f(200.f, 200);

	triangle[0].color = sf::Color::Red;
	triangle[1].color = sf::Color::Green;
	triangle[2].color = sf::Color::Blue;


	return(triangle);
	
}


sf::VertexArray rectangle()
{
	sf::VertexArray rectangle(sf::LineStrip, 5);

	rectangle[0].position = sf::Vector2f(300.f, 200.f);
	rectangle[1].position = sf::Vector2f(300.f, 300.f);
	rectangle[2].position = sf::Vector2f(450.f, 300.f);
	rectangle[3].position = sf::Vector2f(450.f, 200.f);
	rectangle[4].position = sf::Vector2f(300.f, 200.f); // Closing the rectangle

	rectangle[0].color = sf::Color::Red;
	rectangle[1].color = sf::Color::Yellow;
	rectangle[2].color = sf::Color::Green;
	rectangle[3].color = sf::Color::Magenta;
	rectangle[4].color = sf::Color::Red; // Same color as the first vertex




	return(rectangle);
}


