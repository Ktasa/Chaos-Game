#include "points.h"
#include <vector>
#include <cmath>
#include <cstdlib>
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

point points::calcNextPoint(){
    //calculate midpoint between last point and random vertex
    //use random number 0-2 as index position of vertex
    //get last point using index size - 1 
    point p;
    return p;
}

void points::drawAllPoints()
{
    //loop through all vector values to draw points
}
