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
    points(point v1, point v2, point v3, point start_input);
    void addPoint(point p); //vector is private so access here
    void calcNextPoint();
    void drawAllPoints(sf::RenderWindow &window);
};

#endif // POINTS_H
