#include "Player.h"

Player::Player()
{

}
Player::Player(sf::Texture& tex, sf::Vector2f pos, sf::Vector2f maxVel)
{
	mTexture = tex;
	mPositon = pos;
	maxVelocity = maxVel;

}
void Player::Move()
{


}