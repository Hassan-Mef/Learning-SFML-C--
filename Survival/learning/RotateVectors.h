#pragma once

#include <SFML/Graphics.hpp>
#include "newShapes.h"

void rotateVertexArray(sf::VertexArray& va, float angle, sf::Vector2f center)
{
    float radians = angle * (3.14159265 / 180.0);
    for (int i = 0; i < va.getVertexCount(); ++i)
    {
        sf::Vector2f pos = va[i].position;
        float x = pos.x - center.x;
        float y = pos.y - center.y;


        float rotatedX = x * cos(radians) - y * sin(radians);
        float rotatedY = x * sin(radians) + y * cos(radians);


        va[i].position = sf::Vector2f(rotatedX + center.x, rotatedY + center.y);
    }
}

void Transform(sf::RenderWindow& window, float& angle)

{
    sf::VertexArray rec = rectangle();
    
    sf::Vector2f center(375.f, 250.f);
    sf::VertexArray tri = Shapes();
    sf::Vector2f tri_center(150.f, 166.67f);


    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        angle -= 2.0f;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        angle += 2.0f;
    }

    rotateVertexArray(rec, angle, center);
    rotateVertexArray(tri, angle, tri_center);

    window.draw(tri);
    window.draw(rec);
}