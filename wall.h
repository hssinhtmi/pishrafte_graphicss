#ifndef WALL
#define WALL
#include <vector>
#include <SFML/Graphics.hpp>
#include "patient.h"
using namespace std;

class wall
{
    public:
        // constructor
        wall();

        // member functions
        void make_wall();
        void Draw(sf::RenderWindow *);
        
    private:
        vector<sf::RectangleShape> square;
};

#endif