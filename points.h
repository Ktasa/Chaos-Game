#ifndef POINTS_H
#define POINTS_H
#include <vector>
using namespace std;

//I think normally each class/struct would go in its own file
//but its so tiny...
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
    points(point v1, point v2, point v3, point start_input);
    point calcNextPoint();
    void drawAllPoints();
};

#endif // POINTS_H