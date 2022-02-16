#ifndef BOB_H
#define BOB_H

#include <SFML/Graphics.hpp>


class Bob
{
private:
  sf::Vector2f m_Position;
  sf::Sprite m_Sprite;
  sf::Texture m_Texture;
  bool m_LeftPressed;
  bool m_RightPressed;
  float m_Speed;

public:
  Bob();
  sf::Sprite getSprite();
  void moveLeft();
  void moveRight();
  void stopLeft();
  void stopRight();
  void update(float);
};

#endif
