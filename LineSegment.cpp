/*********************************************************************
 ** Author: Richard Joseph
 ** Date: 3/4/19
 ** Description: Class Implementation for LineSegment
 *********************************************************************/

#include "LineSegment.hpp"
#include <iostream>

//Constructor that takes the address of two Point objects
LineSegment::LineSegment(Point *endPoint1In, Point *endPoint2In)
{
    setEnd1(endPoint1In); //Passes endPoint1in to the set Method
    setEnd2(endPoint2In); //Passes endPoint2in to the set Method
}


void LineSegment::setEnd1(Point *endPoint1In)
{
    endPoint1 = endPoint1In;
}

void LineSegment::setEnd2(Point *endPoint2In)
{
    endPoint2 = endPoint2In;
}


Point *LineSegment::getEnd1()
{
    return endPoint1;
}

//
Point *LineSegment::getEnd2()
{
    return endPoint2;
}

//Method to caluculate the length of the line segment
double LineSegment::length()
{
    double totalLength = 0.0;
    
    //Dereferences and then "dot" operator is applied
    totalLength = endPoint1->distanceTo(*endPoint2);
    
    return totalLength;
}

//Method to calulate the slope of the line segment
double LineSegment::slope()
{
    double slope = 0.0;
    
    //Dereferences and then "dot" operator is applied
    slope = (endPoint1->getYCoord() - endPoint2->getYCoord()) / (endPoint1->getXCoord()-endPoint2->getXCoord());

    return slope;
}
