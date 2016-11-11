#pragma once
#ifndef PLAYER_H
#define PLAYER_H

#include "SFML\Graphics.hpp"

class Player
{


private:
	sf::Texture mTexture;
	sf::Sprite mSprite;
	sf::Vector2f mPositon;
	sf::Vector2f maxVelocity;

public:
	Player();
	Player(sf::Texture& tex,sf::Vector2f pos,sf::Vector2f maxVel);
	void Move();



};

#endif
