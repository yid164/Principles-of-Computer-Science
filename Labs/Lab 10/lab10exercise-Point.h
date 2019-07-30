// Name: Yinsheng Dong
// Student Number: 11148648
// NSID: yid164
// Lecture Section: CMPT 115 (02)


/*
 *  test.h
 *
 *
 *  Created by Ian McQuillan on 19/03/07.
 *  Copyright 2007 __MyCompanyName__. All rights reserved.
 *
 */


class Point { // sample class
    
private:
    int x; // stores the x coordinate
    int y; // stores the y coordinate
    
public:
    Point();//the constructor
    Point(int xCoord, int yCoord);
    void setX(int newX);
    void setY(int newY);
    int getX();
    int getY();
    int add();
    float displacement (int newX, int newY);
    ~Point(); //the destructor
};