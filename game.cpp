#include <iostream>
#include <SFML/Graphics.hpp>
#include "../header/game.h"
#include "../header/window.h"
#include "../header/wall.h"

game::game()
{
    start_the_game();
}

void game::start_the_game()
{
    myfile.open();
    Window.open_window();
}

