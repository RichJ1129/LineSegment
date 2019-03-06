/*********************************************************************
 ** Author: Richard Joseph
 ** Date: 3/4/19
 ** Description: Class Declaration for LineSegment 
 *********************************************************************/

#ifndef LineSegment_hpp
#define LineSegment_hpp
#include "Point.hpp"

class LineSegment
{
    
private:
    Point *endPoint1;
    Point *endPoint2;
    
public:
    LineSegment(Point *, Point *); //Constructor that takes two Point Pointers as parameters
    void setEnd1(Point *); 
    void setEnd2(Point *);
    Point *getEnd1();
    Point *getEnd2();
    double length(); //Method to calulate the length of the Line segment
    double slope(); //Method to calulate the slope of the line segment
};
#endif /* LineSegment_hpp */
