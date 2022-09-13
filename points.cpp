#include "points.h"
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <SFML/Graphics.hpp>
using namespace std;
//#include <iostream>
//using namespace std;



points::points(){}

void points::addPoint(point p)
{
    allPoints.push_back(p);
}

void points::calcNextPoint(){
    //calculate midpoint between last point and random vertex
    //use random number 0-2 as index position of vertex
    //seed is set outside function for repetitive use
    point p;
    point vertex;
    p = allPoints[allPoints.size() - 1]; //Last point in the vector
    int randNum = rand() % 3;
    vertex = allPoints[randNum]; //Random vertex
    //cout << time(NULL) << randNum << endl;
    //Creating midpoint for x and y
    p.x = (p.x + vertex.x) / 2;
    p.y = (p.y + vertex.y) / 2;
    allPoints.push_back(p);
}

void points::drawAllPoints(sf::RenderWindow &window)
{
    for(int i=0; i<allPoints.size(); i++)
    {
        int x = allPoints[i].x;
        int y = allPoints[i].y;
        sf::Vertex dot(sf::Vector2f(x, y), sf::Color::White);
        window.draw(&dot, 1, sf::Points);
        //possible easier code to draw points:
        //RectangleShape rect(Vector2f{10,10});
        //rect.setOrigin(Vector2f{x,y});
        //window.draw(rect);
        //rect.setFillColor(sf::Color::White);
    }
}

void points::emptyPoints()
{
    allPoints.clear();
}

