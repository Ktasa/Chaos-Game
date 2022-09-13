#include "points.h"
#include <vector>
#include <SFML/Graphics.hpp>
using namespace sf;

void inputPoints(points& shape, sf::RenderWindow &window)
{
    Font final;
    final.loadFromFile("finalf.ttf");
    
    Text prompt1, prompt2;
    prompt1.setString("CLICK THREE POINTS ON THE SCREEN TO CREATE A TRIANGLE");
    prompt1.setCharacterSize(75);
    prompt1.setFillColor(Color::White);
    prompt1.setFont(final);

    FloatRect textRect = prompt1.getLocalBounds();
    prompt1.setOrigin(textRect.left + textRect.width / 2.0f,
        textRect.top + textRect.height / 2.0f);
    prompt1.setPosition(1920 / 2.0f, 1080 / 2.0f);

    prompt2.setString("CLICK ANYWHERE TO START THE CHAOS GAME");
    prompt2.setCharacterSize(75);
    prompt2.setFillColor(Color::White);
    prompt2.setFont(final);

    FloatRect textRect2 = prompt2.getLocalBounds();
    prompt2.setOrigin(textRect2.left + textRect2.width / 2.0f,
        textRect2.top + textRect2.height / 2.0f);
    prompt2.setPosition(1920 / 2.0f, 1080 / 2.0f);

    window.draw(prompt1);
    window.display();

    point p;
    int numInput = 0;
    while (numInput < 4 && window.isOpen())
    {
        if(Keyboard::isKeyPressed(Keyboard::Escape))
        {
            window.close();
        }
        if (numInput==3) //4th point has different prompt
        {
            window.draw(prompt2);
            window.display();
        }
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            bool mouseIsPressed = true;
            while (numInput < 4 && mouseIsPressed)
            {
                if ( !(sf::Mouse::isButtonPressed(sf::Mouse::Left)) )
                {
                    sf::Vector2i localPosition = sf::Mouse::getPosition(window);
                    p.x = localPosition.x;
                    p.y = localPosition.y;
                    shape.addPoint(p);
                    numInput++;
                    if (numInput == 2) {window.clear();}
                    mouseIsPressed = false;
                }
            }
        }
    }
}
