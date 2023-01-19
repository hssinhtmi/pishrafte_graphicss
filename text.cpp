#include <iostream>
#include <vector>
#include <unistd.h>
#include <string>
#include <cstdlib>
#include "../header/text.h"

using namespace std;

int text::num(0);
int text::hold(0);
int text::score(0);

vector<int> text::file_hold(10, 0);

text::text() : myText(12)
{
}

void text::set_font()
{
    if (!font.loadFromFile("/home/hossein/Downloads/sugar_snow/Sugar Snow.ttf"))
    {
        cerr << "Error!!!! can't loading file" << endl;
    }
}

void text::set_text()
{
    set_font();

    // first window
    myText[0].setFont(font);
    myText[0].setString("Ear Nose \n\nThroat \n\nSpecialist!!");
    myText[0].setCharacterSize(24);
    myText[0].setFillColor(sf::Color::Red);
    myText[0].setStyle(sf::Text::Bold);
    myText[0].setPosition(10, 20);
    if (file_hold[0] == 0)
    {
        myfile.write_name("Ear Nose Throat Specialist!!");
        file_hold[0] = 1;
    }

    // second window
    myText[1].setFont(font);
    myText[1].setString("heart\n\nSpecialist!!");
    myText[1].setCharacterSize(24);
    myText[1].setFillColor(sf::Color::Green);
    myText[1].setStyle(sf::Text::Bold);
    myText[1].setPosition(210, 20);
    if (file_hold[1] == 0)
    {
        myfile.write_name("heart Specialist!!");
        file_hold[1] = 1;
    }

    // third window
    myText[2].setFont(font);
    myText[2].setString("Dentist!!");
    myText[2].setCharacterSize(24);
    myText[2].setFillColor(sf::Color::Yellow);
    myText[2].setStyle(sf::Text::Bold);
    myText[2].setPosition(410, 20);
    if (file_hold[2] == 0)
    {
        myfile.write_name("Dentist!!");
        file_hold[2] = 1;
    }

    // 4 window
    myText[3].setFont(font);
    myText[3].setString("Eye\n\nSpecialist!!");
    myText[3].setCharacterSize(24);
    myText[3].setFillColor(sf::Color::White);
    myText[3].setStyle(sf::Text::Bold);
    myText[3].setPosition(610, 20);
    if (file_hold[3] == 0)
    {
        myfile.write_name("Eye Specialist!!");
        file_hold[3] = 1;
    }

    // extra window
    myText[4].setFont(font);
    myText[4].setString("Extraw window(1)");
    myText[4].setCharacterSize(24);
    myText[4].setFillColor(sf::Color::Red);
    myText[4].setStyle(sf::Text::Bold);
    myText[4].setPosition(910, 80);
    if (file_hold[4] == 0)
    {
        myfile.write_name("Extraw window(1)");
        file_hold[4] = 1;
    }

    /***********down windows**********/

    // first window
    myText[5].setFont(font);
    myText[5].setString("ICU");
    myText[5].setCharacterSize(30);
    myText[5].setFillColor(sf::Color::Red);
    myText[5].setStyle(sf::Text::Bold);
    myText[5].setPosition(60, 770);
    if (file_hold[5] == 0)
    {
        myfile.write_name("ICU");
        file_hold[5] = 1;
    }

    // second window
    myText[6].setFont(font);
    myText[6].setString("Emergency");
    myText[6].setCharacterSize(24);
    myText[6].setFillColor(sf::Color::Green);
    myText[6].setStyle(sf::Text::Bold);
    myText[6].setPosition(210, 750);
    if (file_hold[6] == 0)
    {
        myfile.write_name("Emergency");
        file_hold[6] = 1;
    }

    // third window
    myText[7].setFont(font);
    myText[7].setString("Pharmacy");
    myText[7].setCharacterSize(24);
    myText[7].setFillColor(sf::Color::Yellow);
    myText[7].setStyle(sf::Text::Bold);
    myText[7].setPosition(410, 750);
    if (file_hold[7] == 0)
    {
        myfile.write_name("Pharmacy");
        file_hold[7] = 1;
    }

    // 4 window
    myText[8].setFont(font);
    myText[8].setString("Surgery \n\nroom");
    myText[8].setCharacterSize(24);
    myText[8].setFillColor(sf::Color::White);
    myText[8].setStyle(sf::Text::Bold);
    myText[8].setPosition(610, 750);
    if (file_hold[8] == 0)
    {
        myfile.write_name("Surgery room");
        file_hold[8] = 1;
    }

    // extra window
    myText[9].setFont(font);
    myText[9].setString("Extraw window(2)");
    myText[9].setCharacterSize(24);
    myText[9].setFillColor(sf::Color::Red);
    myText[9].setStyle(sf::Text::Bold);
    myText[9].setPosition(910, 780);
    if(file_hold[9] == 0)
    {
        myfile.write_name("Extraw window(2)");
        file_hold[9] = 1;
    }

    string patient_score = to_string(score);
    myText[11].setFont(font);
    myText[11].setString("SCORE = " + patient_score);
    myText[11].setPosition(1250, 200);
    myText[11].setFillColor(sf::Color::Red);
    myText[11].setCharacterSize(24);
}
void text::Draw(sf::RenderWindow *window)
{
    set_text();
    if (temp || num == 0)
    {
        show_sickness();
    }
    for (size_t i = 0; i < myText.size(); i++)
    {
        window->draw(myText.at(i));
    }
}

void text::show_sickness()
{
    hold = random_number();
    switch (hold)
    {
    case 0:
        myText[10].setFont(font);
        myText[10].setString("I have a sore nose");
        myText[10].setPosition(1250, 50);
        myText[10].setCharacterSize(24);
        myText[10].setFillColor(sf::Color::Red);
        break;
    case 1:
        myText[10].setFont(font);
        myText[10].setString("I have a heartache");
        myText[10].setPosition(1250, 50);
        myText[10].setFillColor(sf::Color::Red);
        myText[10].setCharacterSize(24);
        break;
    case 2:
        myText[10].setFont(font);
        myText[10].setString("I have toothache");
        myText[10].setPosition(1250, 50);
        myText[10].setCharacterSize(24);
        myText[10].setFillColor(sf::Color::Red);
        break;
    case 3:
        myText[10].setFont(font);
        myText[10].setString("I have a sore eye");
        myText[10].setPosition(1250, 50);
        myText[10].setCharacterSize(24);
        myText[10].setFillColor(sf::Color::Red);
        break;
    case 5:
        myText[10].setFont(font);
        myText[10].setString("The general condition of \n\nthe patient is very bad");
        myText[10].setPosition(1250, 50);
        myText[10].setCharacterSize(24);
        myText[10].setFillColor(sf::Color::Red);
        break;
    case 6:
        myText[10].setFont(font);
        myText[10].setString("The patient is injured");
        myText[10].setPosition(1250, 50);
        myText[10].setFillColor(sf::Color::Red);
        myText[10].setCharacterSize(24);
        break;
    case 7:
        myText[10].setFont(font);
        myText[10].setString("I want medicine");
        myText[10].setPosition(1250, 50);
        myText[10].setFillColor(sf::Color::Red);
        myText[10].setCharacterSize(24);
        break;
    case 8:
        myText[10].setFont(font);
        myText[10].setString("The patient has a\n\n very deep wound");
        myText[10].setPosition(1250, 50);
        myText[10].setFillColor(sf::Color::Red);
        myText[10].setCharacterSize(24);
        break;
    }
    num = 1;
}

int text::get_hold()
{
    return hold;
}

int text::random_number()
{
    // random number for Sickness
    srand((unsigned)time(NULL));

    int number = (rand() % 9);

    if (number == 4)
    {
        number = 2;
    }

    return number;
}

void text::is_true(bool temp)
{
    this->temp = temp;
}

void text::positive_or_negative_points(int number)
{
    switch (number)
    {
    case 0:
        score += 5;
        break;
    case 1:
        score -= 2;
        break;
    }
    myfile.write_score(score);
}
