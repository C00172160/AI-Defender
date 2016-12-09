#pragma once
#ifndef PLAYER_H
#define PLAYER_H

#include "SFML\Graphics.hpp"
#include "InputManager.h"

class Player
{


private:
	sf::Texture mTexture;
	sf::Sprite mSprite;
	sf::Vector2f mPositon;
	sf::Vector2f maxVelocity;
	sf::Vector2f velocity;
	sf::Vector2f mScale;

	bool playerFacingRight;
	bool playerFacingUp;

	float flipSpeed;

public:
	Player();
	Player(sf::Texture& tex,sf::Vector2f pos,sf::Vector2f maxVel);
	void Move(const char *key);
	void MoveUp(bool pressed);
	void MoveDown(bool pressed);
	void MoveLeft(bool pressed);
	void MoveRight(bool pressed);
	void Update();
	void Draw(sf::RenderWindow &window);
	void Flip();




};

#endif
