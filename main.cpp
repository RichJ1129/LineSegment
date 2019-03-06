//
//  main.cpp
//  Assignment 9
//
//  Created by Richard Joseph on 3/4/19.
//  Copyright © 2019 Richard Joseph. All rights reserved.
//

#include <iostream>
#include "LineSegment.hpp"

int main()
{
    Point p1(-1.5, 0.0);
    Point p2(1.5, 4.0);
    double dist = p1.distanceTo(p2);
    
    std::cout << dist << std::endl;
    
    Point p3(4.3, 7.52);
    Point p4(-17.0, 1.5);
    LineSegment ls1(&p3, &p4);
    double length = ls1.length();
    double slope = ls1.slope();
    
    std::cout<< length <<std::endl;
    std::cout<< slope <<std::endl;


    
    return 0;
}
