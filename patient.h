#ifndef PATIENT
#define PATIENT
#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>
#include "patient_in_sections.h"
#include "text.h"

class patient
{
    public:
        // member functions
        void move_patient(int);

        void patient_shape(sf::RenderWindow *);

        int check_patinet();
        
        text Text;

    private:
        sf::Texture photo;
        sf::Sprite playphoto;

        static int shape_X, shape_Y, score;
};

#endif
