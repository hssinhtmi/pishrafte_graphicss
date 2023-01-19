#ifndef PATIENT_IN_SECTIONS
#define PATIENT_IN_SECTIONS
#include <vector>
#include <SFML/Graphics.hpp>
#include "file.h"

class patient_insections
{
public:
    void control(sf::RenderWindow *);
    void improve(int);
    bool end_of_game();
    void write_file();
    
    file myfile;

private:
    sf::Texture photo;
    sf::Sprite playphoto;

    static std::vector<int> number;
};

#endif