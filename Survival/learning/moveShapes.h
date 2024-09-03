#pragma once
#include <SFML/Graphics.hpp>







		

		void moveX(sf::VertexArray rec,float X)
		{
			for (size_t i = 0; i < rec.getVertexCount(); ++i)
			{
				rec[i].position.x += X;
			}
		}
		void moveY(sf::VertexArray rec,float Y)
		{
			for (size_t i = 0; i < rec.getVertexCount(); ++i)
			{
				rec[i].position.y += Y;
			}
		}

		


