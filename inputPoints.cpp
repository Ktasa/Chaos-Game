#include "points.h"
#include <vector>
#include <SFML/Graphics.hpp>
using namespace sf;

//possibly return int code to exit program
void inputPoints(points& shape)
{
    /*Font fontName;
    fontName.loadFromFile("fontName.ttf");
    Text prompt1, prompt2;
    prompt1.setString("Click 3 Points On The Screen To Create A Triangle");
    prompt1.setCharacterSize(75);
    prompt1.setFillColor(Color::White);
    prompt1.setFont(fontName);

    prompt2.setString("Click Anywhere To Start The Chaos Game");
    prompt2.setCharacterSize(75);
    prompt2.setFillColor(Color::White);
    prompt2.setFont(fontName);

    FloatRect textRect = test.getLocalBounds();
    text.setOrigin(textRect.left + textRect.width / 2.0f,
        textRect.top + textRect.height / 2.0f);
    text.setPosition(1920 / 2.0f, 1080 / 2.0f);
    
    window.draw(text);
    */
    //output prompt text
    //"Click 3 points on the screen to create the triangle"
    bool exiting = false;
    point p;
    numInput = 0;
    while (numInput < 4 && !exiting)
    {
        if(Keyboard::isKeyPressed(Keyboard::Escape))
        {
            exiting = true;
            window.close();
        }
        if (numInput==3) //4th point has different prompt
        {
            //output "click anywhere to start the chaos game"
        }
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            sf::Vector2i localPosition = sf::Mouse::getPosition(window);
            p.x = localPosition.x;
            p.y = localPosition.y;
            shape.allPoints.push_back(p);
        }
    }
}