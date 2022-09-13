#ifndef POINTS_H
#define POINTS_H
#include <vector>
using namespace std;
#include <SFML/Graphics.hpp>
using namespace sf;

struct point
{
    int x;
    int y;
};

class points
{
    // the 3 vertices will always be index 0,1,2 of the vector
    vector<point> allPoints; 
public:
    points();
    void addPoint(point p); //vector is private so access here
    void calcNextPoint();
    void drawPoint(point p, sf::RenderWindow &window);
    void drawPoint(sf::RenderWindow &window);
    void drawAllPoints(sf::RenderWindow &window);
    void emptyPoints();
};

#endif // POINTS_H
