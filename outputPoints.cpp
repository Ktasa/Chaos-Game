#include "points.h"
#include <SFML/Graphics.hpp>
#include <ctime>
using namespace sf;
//#include <iostream>
//using namespace std;

void outputPoints(points& shape, sf::RenderWindow &window)
{
    srand(time(0));
    //clicking mouse ends output loop
    
    while(window.isOpen() && !(Keyboard::isKeyPressed(Keyboard::Enter)))
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
    
    /*
    int i=0, j=500; //alternate version goes faster
    window.clear();
    while(window.isOpen() && !(Keyboard::isKeyPressed(Keyboard::Enter)))
    {  
            shape.calcNextPoint();
            shape.drawPoint(window);
            if(i%j==0)
            {window.display();}
            i++;
            window.display();
            if(Keyboard::isKeyPressed(Keyboard::Escape))
            {
                window.close();
            }
    }
    */
    
    window.clear();
    shape.emptyPoints();
}
