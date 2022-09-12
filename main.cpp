#include <SFML/Graphics.hpp>
using namespace sf;
#include "points.h"

void inputPoints(points& shape, sf::RenderWindow &window);

int main()
{
    VideoMode vm(1920, 1080);

    RenderWindow window(vm, "Chaos Game", Style::Fullscreen);

    RectangleShape rectangle;

    while(window.isOpen())
    {
        points triangle;
        inputPoints(triangle, window);
        /*
        ********************
        Handle user's input
        ********************
        */

        if(Keyboard::isKeyPressed(Keyboard::Escape))
        {
            window.close();
        }

        /*
        *********************
        Update the scene
        *********************
        */

        //Change variable values and access functions here?

        /*
        **********************
        Draw the scene
        **********************
        */

        //Show everything that we drew
        window.display();
    }
    
    return 0;
}
