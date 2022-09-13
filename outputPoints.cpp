#include "points.h"
#include <SFML/Graphics.hpp>
#include <ctime>
using namespace sf;
//#include <iostream>
//using namespace std;

void outputPoints(points& shape, sf::RenderWindow &window)
{
    srand(time(0));

    //for(int i=0; i<1000; i++)
    while(!(sf::Mouse::isButtonPressed(sf::Mouse::Left)))
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
    while(window.isOpen())
    {
        if(Keyboard::isKeyPressed(Keyboard::Escape))
        {
            window.close();
        }
    }
}