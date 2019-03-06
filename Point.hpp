/*********************************************************************
 ** Author: Richard Joseph
 ** Date: 3/4/19
 ** Description: Class Declaration for Point
 *********************************************************************/

#ifndef Point_hpp
#define Point_hpp

class Point
{

private:
    
    double currXCoord;
    double currYCoord;

public:
    
    Point(); //Default Constructor
    Point(double, double); //Constructor that takes two double parameters
    void setXCoord(double);
    void setYCoord(double);
    double getXCoord();
    double getYCoord();
    double distanceTo(Point); //Method to calculate distance from one point to another
    
};

#endif /* Point_hpp */
