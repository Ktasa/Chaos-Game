#include "points.h"
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <SFML/Graphics.hpp>
using namespace std;
#include <iostream>
using namespace std;



points::points(){}

void points::addPoint(point p)
{
    allPoints.push_back(p);
}

void points::calcNextPoint(){
    //calculate midpoint between last point and random vertex
    //use random number 0-2 as index position of vertex
    //get last point using index size - 1 
    //srand(time(0)); //Creates rng
    point p;
    point vertex;
    p = allPoints[allPoints.size() - 1]; //Last point in the vector
    int randNum = rand() % 3;
    vertex = allPoints[randNum]; //Random vertex
    //cout << time(NULL) << randNum << endl;
    //Creating midpoint for x and y
    p.x = (p.x + vertex.x) / 2;
    p.y = (p.y + vertex.y) / 2;
    //Use pushback to add p in allPoints
    allPoints.push_back(p);
}

void points::drawAllPoints(sf::RenderWindow &window)
{
    for(int i=0; i<allPoints.size(); i++)
    {
        int x = allPoints[i].x;
        int y = allPoints[i].y;
        sf::Vertex point(sf::Vector2f(x, y), sf::Color::White);
        window.draw(&point, 1, sf::Points);
    }
}

