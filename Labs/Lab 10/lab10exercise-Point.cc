// Name: Yinsheng Dong
// Student Number: 11148648
// NSID: yid164
// Lecture Section: CMPT 115 (02)


/*
 *  test.cpp
 *  
 *
 *  Created by Ian McQuillan on 19/03/07.
 *  Copyright 2007 __MyCompanyName__. All rights reserved.
 *
 */

#include <iostream> 

#include "lab10exercise-Point.h"
#include <math.h>

using namespace std;

Point::Point(){
  x = 0; 
  y = 0;

}

Point :: Point (int xCoord, int yCoord)
{
    x=xCoord;
    y=yCoord;
}

Point::~Point(){ 
  //do nothing 
  cout << "about to destroy";
} 



void Point::setX(int newX){ 
  x = newX; 
} 



void Point::setY(int newY){ 
  y = newY; 
} 

int Point::getX(){ 
  return x; 
} 



int Point::getY(){ 
  return y; 
} 



int Point::add() { 
  return x+y; 
}


float Point :: displacement(int newX, int newY){
    float a;
    a = sqrt ((x*x) + (y*y));
    return a;
}
