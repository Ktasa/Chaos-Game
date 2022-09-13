#include <SFML/Graphics.hpp>
using namespace sf;
#include "points.h"

void inputPoints(points& shape, sf::RenderWindow &window);
void outputPoints(points &shape, RenderWindow &window);

int main()
{
    VideoMode vm(1920, 1080);

    RenderWindow window(vm, "Chaos Game", Style::Default);

    RectangleShape rectangle;

    points triangle;
    while(window.isOpen())
    {
        inputPoints(triangle, window);
        outputPoints(triangle, window);
    }

    return 0;
}
