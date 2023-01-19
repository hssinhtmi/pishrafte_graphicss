#ifndef TEXT
#define TEXT
#include <vector>
#include <SFML/Graphics.hpp>
#include "file.h"

class text
{
    public :
        // constructor
        text();

        //memberf functions
        void set_font();
        void set_text();
        void Draw(sf::RenderWindow *);
        int random_number();    
        void show_sickness();
        int get_hold();
        void is_true(bool);
        void positive_or_negative_points(int);

        file myfile;

    private :
        sf::Font font;
        std::vector<sf::Text> myText;

        static int num, hold, score;
        static vector<int> file_hold;

        bool temp;
};

#endif