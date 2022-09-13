#include "points.h"
#include <vector>
#include <cmath>
#include <ctime>
using namespace std;

//this empty constructor might be more useful
//since it allows the object to be initialized with no points
points::points(){}

points::points(point v1, point v2, point v3, point start_input){
    allPoints.push_back(v1);
    allPoints.push_back(v2);
    allPoints.push_back(v3);
    allPoints.push_back(start_input);
}

void points::addPoint(point p)
{
    allPoints.push_back(p);
}

void points::calcNextPoint(){
    //calculate midpoint between last point and random vertex
    //use random number 0-2 as index position of vertex
    //get last point using index size - 1 
    srand(time(0)); //Creates rng
    point p;
    point vertex;
    p = allPoints[allPoints.size() - 1]; //Last point in the vector
    vertex = allPoints[rand() % 3]; //Random vertex
    //Creating midpoint for x and y
    p.x = (p.x + vertex.x) / 2;
    p.y = (p.y + vertex.y) / 2;
    //Use pushback to add p in allPoints
    allPoints.push_back(p);
}

void points::drawAllPoints()
{
    //loop through all vector values to draw points
}
