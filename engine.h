#ifndef ENGINE_H
#define ENGINE_H

#include <SFML/Graphics.hpp>
#include "bob.h"

class Engine
{
private:
  sf::RenderWindow m_Window;
  sf::Sprite m_BackgroundSprite;
  sf::Texture m_BackgroundTexture;
  Bob m_Bob;
  void input();
  void update(float);
  void draw();

public:
  Engine();
  void start();
};

#endif
