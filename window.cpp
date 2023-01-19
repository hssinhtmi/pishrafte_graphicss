#include <iostream>
#include <SFML/Graphics.hpp>
#include "window.h"
#include "wall.h"
#include "patient.h"
#include "patient_in_sections.h"

using namespace std;

void window::open_window()
{
    // open window
    Window = new sf::RenderWindow(sf::VideoMode(1600, 900), "Hospital!", sf::Style::Titlebar | sf::Style::Close);
    Window->setPosition(sf::Vector2i(140, 80));
    Window->setFramerateLimit(30);

    // event source
    sf::Event event;

    // clock and delta time
    sf::Clock clock;
    sf::Time dt;

    // open window
    while (Window->isOpen())
    {
        dt = clock.restart();

        while (Window->pollEvent(event))
        {
            switch (event.type)
            {
            // close key for close
            case sf::Event::Closed:
                Window->close();
                break;
            // escape key for close
            case sf::Event::KeyPressed:
                if (event.key.code == sf::Keyboard::Escape)
                {
                    Window->close();
                    break;
                }
            case sf::Event::KeyReleased: // (right left up down) move
                switch (event.key.code)  // which one is it
                {
                case sf::Keyboard::Right:
                    Patient.move_patient(0);
                    break;
                case sf::Keyboard::Left:
                    Patient.move_patient(1);
                    break;
                case sf::Keyboard::Up:
                    Patient.move_patient(2);
                    break;
                case sf::Keyboard::Down:
                    Patient.move_patient(3);
                    break;
                }
            }
        }
        Window->clear(sf::Color(20, 50, 120));
        Wall.Draw(Window);
        switch (Patient.check_patinet())
        {
        case 0:
            Patient_InSections.improve(0);
            Text.is_true(true);
            break;
        case 1:
            Patient_InSections.improve(1);
            Text.is_true(true);
            break;
        case 2:
            Patient_InSections.improve(2);
            Text.is_true(true);
            break;
        case 3:
            Patient_InSections.improve(3);
            Text.is_true(true);
            break;
        case 5:
            Patient_InSections.improve(5);
            Text.is_true(true);
            break;
        case 6:
            Patient_InSections.improve(6);
            Text.is_true(true);
            break;
        case 7:
            Patient_InSections.improve(7);
            Text.is_true(true);
            break;
        case 8:
            Patient_InSections.improve(8);
            Text.is_true(true);
            break;
        case -1:
            Text.is_true(false);
            break;
        }
        Patient_InSections.control(Window);
        Text.Draw(Window);
        Patient.patient_shape(Window);
        Window->display();
        if (Patient_InSections.end_of_game())
        {
            Patient_InSections.write_file();
            Window->close();
        }
    }
}