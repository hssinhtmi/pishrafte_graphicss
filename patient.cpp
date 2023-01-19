#include <iostream>
#include <SFML/Graphics.hpp>
#include "patient.h"
#include "patient_in_sections.h"
#include <vector>

// X position
int patient::shape_X = 0;

// Y position
int patient::shape_Y = 400;

void patient::patient_shape(sf::RenderWindow *window)
{
    // loading file
    if (!photo.loadFromFile("../download_100x100_50.jpeg"))
    {
        // if can't loading file , programm is ending
        std::cerr << "ERROR" << std::endl;
        return;
    }
    playphoto.setTexture(photo);

    playphoto.setPosition(shape_X, shape_Y);

    window->draw(playphoto);
}

void patient::move_patient(int number)
{
    if (shape_X < 1150 && number == 0)
    {
        shape_X += 2; // X position
    }
    if (shape_X > 0 && number == 1)
    {
        shape_X -= 2;
    }
    if (shape_Y > 200 && number == 2)
    {
        shape_Y -= 2;
    }
    if (shape_Y < 650 && number == 3)
    {
        shape_Y += 2;
    }
}

int patient::check_patinet()
{
    int number = Text.get_hold();

    // checking for patients in sections
    if (shape_X < 150 && shape_Y == 200)
    {
        shape_X = 0;
        shape_Y = 400;
        if (number == 0)
        {
            Text.positive_or_negative_points(0);
            return 0;
        }
        Text.positive_or_negative_points(1);
        return -1;
    }
    if (shape_X < 350 && shape_X > 200 && shape_Y == 200)
    {
        shape_X = 0;
        shape_Y = 400;
        if (number == 1)
        {
            Text.positive_or_negative_points(0);
            return 1;
        }
        Text.positive_or_negative_points(1);
        return -1;
    }
    if (shape_X < 550 && shape_X > 400 && shape_Y == 200)
    {
        shape_X = 0;
        shape_Y = 400;
        if (number == 2)
        {
            Text.positive_or_negative_points(0);
            return 2;
        }
        Text.positive_or_negative_points(1);
        return -1;
    }
    if (shape_X < 750 && shape_X > 600 && shape_Y == 200)
    {
        shape_X = 0;
        shape_Y = 400;
        if (number == 3)
        {
            Text.positive_or_negative_points(0);
            return 3;
        }
        Text.positive_or_negative_points(1);
        return -1;
    }
    if (shape_X < 150 && shape_Y == 650)
    {
        shape_X = 0;
        shape_Y = 400;
        if (number == 5)
        {
            Text.positive_or_negative_points(0);
            return 5;
        }
        Text.positive_or_negative_points(1);
        return -1;
    }
    if (shape_X < 350 && shape_X > 200 && shape_Y == 650)
    {
        shape_X = 0;
        shape_Y = 400;
        if (number == 6)
        {
            Text.positive_or_negative_points(0);
            return 6;
        }
        Text.positive_or_negative_points(1);
        return -1;
    }
    if (shape_X < 550 && shape_X > 400 && shape_Y == 650)
    {
        shape_X = 0;
        shape_Y = 400;
        if (number == 7)
        {
            Text.positive_or_negative_points(0);
            return 7;
        }
        Text.positive_or_negative_points(1);
        return -1;
    }
    if (shape_X < 750 && shape_X > 600 && shape_Y == 650)
    {
        shape_X = 0;
        shape_Y = 400;
        if (number == 8)
        {
            Text.positive_or_negative_points(0);
            return 8;
        }
        Text.positive_or_negative_points(1);
        return -1;
    }
    return -1;
}