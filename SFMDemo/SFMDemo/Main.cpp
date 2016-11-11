#include <SFML/Graphics.hpp>
#include "Player.h"
int main()
{
	sf::RenderWindow window(sf::VideoMode(1980, 1080), "Lab1");
	
	sf::Texture texture;


	
	if (!texture.loadFromFile("assets/player/playerShip.png"))
	{
		// error...
	}


	Player player(texture, sf::Vector2f(1,1),sf::Vector2f(1,1));


	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.display();
	}

	return 0;
}