#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>
#include <cstdlib>
#include "../header/wall.h"
#include "../header/game.h"
#include "../header/window.h"


wall::wall() : square(11)
{
}

void wall::make_wall()
{
    int temp = 0;

    for (size_t i = 0; i < 4; i++)
    {
        square[i].setFillColor(sf::Color::Transparent);
        square[i].setPosition(temp, 0);
        square[i].setSize(sf::Vector2f(200, 200));
        square[i].setOutlineColor(sf::Color::Magenta);
        square[i].setOutlineThickness(2);
        temp += 200;
    }

    square[4].setFillColor(sf::Color::Transparent);
    square[4].setPosition(800, 0);
    square[4].setSize(sf::Vector2f(400, 200));
    square[4].setOutlineColor(sf::Color::Magenta);
    square[4].setOutlineThickness(2);

    // 4 square down

    temp = 0;

    for (size_t i = 5; i < 9; i++)
    {
        square[i].setFillColor(sf::Color::Transparent);
        square[i].setPosition(temp, 700);
        square[i].setSize(sf::Vector2f(200, 200));
        square[i].setOutlineColor(sf::Color::Magenta);
        square[i].setOutlineThickness(2);
        temp += 200;
    }
    square[9].setFillColor(sf::Color::Transparent);
    square[9].setPosition(800, 700);
    square[9].setSize(sf::Vector2f(400, 200));
    square[9].setOutlineColor(sf::Color::Magenta);
    square[9].setOutlineThickness(2);

    square[10].setFillColor(sf::Color::Red);
    square[10].setPosition(1200, 0);
    square[10].setSize(sf::Vector2f(1, 900));
    square[10].setOutlineColor(sf::Color::Red);
    square[10].setOutlineThickness(2);


    // line for speak
}
void wall::Draw(sf::RenderWindow *window)
{
    make_wall();
    for (size_t i = 0; i < square.size(); i++)
    {
        window->draw(square.at(i));
    }
}
