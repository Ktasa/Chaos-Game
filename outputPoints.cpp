#include "points.h"
#include <SFML/Graphics.hpp>
#include <ctime>
using namespace sf;
//#include <iostream>
//using namespace std;

void outputPoints(points& shape, sf::RenderWindow &window)
{
    srand(time(0));
    //for(int i=0; i<1000; i++) //predetermined output
    //clicking mouse ends output loop
    while(window.isOpen() && !(sf::Mouse::isButtonPressed(sf::Mouse::Left)))
    {
            shape.calcNextPoint();
            window.clear();
            shape.drawAllPoints(window);
            window.display();
            if(Keyboard::isKeyPressed(Keyboard::Escape))
            {
                window.close();
            }
    }
    //allows closing window after program output finishes
    //maybe move to main
    while(window.isOpen())
    {
        if(Keyboard::isKeyPressed(Keyboard::Escape))
        {
            window.close();
        }
    }
}