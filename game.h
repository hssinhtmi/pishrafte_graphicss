#ifndef GAME
#define GAME
#include <SFML/Graphics.hpp>
#include "window.h"
#include "wall.h"
#include "file.h"

class game
{
    public:
         // constructor
        game();

        //functions
        void start_the_game();

        //window class 
        window Window;

        file myfile;
    private:
};

#endif
