#include "engine.h"
#include <SFML/Graphics.hpp>



void Engine::draw()
{
  Engine::m_Window.clear(sf::Color::White);
  Engine::m_Window.draw(Engine::m_BackgroundSprite);
  Engine::m_Window.draw(Engine::m_Bob.getSprite());
  Engine::m_Window.display();
}
