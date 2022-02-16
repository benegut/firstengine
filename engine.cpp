#include "engine.h"
#include <iostream>


Engine::Engine()
{
  sf::Vector2f resolution;
  resolution.x = sf::VideoMode::getDesktopMode().width;
  resolution.y = sf::VideoMode::getDesktopMode().height;

  Engine::m_Window.create(sf::VideoMode(resolution.x, resolution.y), "Simple Game Engine");
  Engine::m_BackgroundTexture.loadFromFile("background.jpg");
  Engine::m_BackgroundSprite.setTexture(m_BackgroundTexture);
}

void Engine::start()
{
  std::cout << "check" << std::endl;
  sf::Clock clock;

  while(Engine::m_Window.isOpen())
    {
      sf::Time dt = clock.restart();
      float dtAsSeconds = dt.asSeconds();

      Engine::input();
      Engine::update(dtAsSeconds);
      Engine::draw();
    }
}
