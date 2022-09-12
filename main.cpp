#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
    VideoMode vm(1920, 1080);

    RenderWindow window(vm, "Chaos Game", Style::Fullscreen);

    RectangleShape rectangle;

    while(window.isOpen())
    {
        points triangle();
        inputPoints(triangle);
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
    
    /*input_points();
    function: prompt and get user input for 3 points and the starting coordinate
    -set up environement that displays screen and allows mouse interaction
    -loop checks for inputs*/

    /*Use classes?
    - keep track of 3 vertices + most recent point
    - member functions make relevant calculations with this data
    */

    /*
    draw_points();
    - begin drawing loop
    - get user input to determine when it stops "click anywhere to finish drawing"
    - or just use a for loop with predetermined amount of points

    points::random_vertex();
    pick one of the vertices at random

    points::midpoint();
    calculate midpoint between vertex and last point

    points::draw_point(); draw point with given coordinates

    */

    return 0;
}