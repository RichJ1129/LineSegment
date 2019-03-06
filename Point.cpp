/*********************************************************************
 ** Author: Richard Joseph
 ** Date: 3/4/19
 ** Description: Class Implementation for Point 
 *********************************************************************/

#include "Point.hpp"
#include <cmath>

//Default Constructor that intializes the coordinates to zero
Point::Point()
{
    currXCoord = 0.0;
    currYCoord = 0.0;
}

//Constructor that takes two double parameters and initializes the coordinates with those values
Point::Point(double xCoord, double yCoord)
{
    currXCoord = xCoord;
    currYCoord = yCoord;
}


void Point::setXCoord(double xCoordIn)
{
    currXCoord = xCoordIn;
}

void Point::setYCoord(double yCoordIn)
{
    currYCoord = yCoordIn;
}

double Point::getXCoord()
{
    return currXCoord;
}

double Point::getYCoord()
{
    return currYCoord;
}

//Method that calculates distance from point that we called the method of to the point that was passed as a parameter
double Point::distanceTo(Point otherPoint)
{
    double totalDistance = 0.0;
    double xValue = 0.0;
    double yValue = 0.0;
    double sqXValue = 0.0;
    double sqYValue = 0.0;
    
    //Calulates x2 minus y1
    xValue = (currXCoord - otherPoint.getXCoord());
    
    //Calculates y2 minus y1
    yValue = (currYCoord - otherPoint.getYCoord());
    
    //Squares the variable
    sqXValue = pow(xValue, 2.0);
   
    //Squares the variable
    sqYValue = pow(yValue, 2.0);
    
    //Adds the squared values then finds the square root of that value
    totalDistance = sqrt(sqXValue + sqYValue);
    
    
    return totalDistance;
}


                         
                         
