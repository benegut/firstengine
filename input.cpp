#include "engine.h"


void Engine::input()
{
  if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
    m_Window.close();
  if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    Engine::m_Bob.moveLeft();
  else
    Engine::m_Bob.stopLeft();
  if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    Engine::m_Bob.moveRight();
  else
    Engine::m_Bob.stopRight();
}
