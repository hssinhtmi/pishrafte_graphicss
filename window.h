#ifndef WINDOW
#define WINDOW
#include <SFML/Graphics.hpp>
#include <vector>
#include "wall.h"
#include "text.h"
#include "patient.h"
#include "patient_in_sections.h"

class window
{
    public:
        // functions
        void open_window();

        wall Wall;

        patient Patient;

        text Text;

        sf::RenderWindow *Window;

        patient_insections Patient_InSections;

    private:
};

#endif