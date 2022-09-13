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

    while(window.isOpen() && !(sf::Mouse::isButtonPressed(sf::Mouse::Left)))
    {
        if(Keyboard::isKeyPressed(Keyboard::Escape))
        {
            window.close();
        }
    }
    //exhaust leftover mouse inputs
    //can be made easier with events?
    while(window.isOpen() && (sf::Mouse::isButtonPressed(sf::Mouse::Left)))
    {
        if(Keyboard::isKeyPressed(Keyboard::Escape))
        {
            window.close();
        }
    }
    window.clear();
    shape.emptyPoints();
}