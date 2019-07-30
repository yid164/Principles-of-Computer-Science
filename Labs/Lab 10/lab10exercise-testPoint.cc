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
#include <math.h>
#include "lab10exercise-Point.h"

using namespace std;


int main() { 
  int x;
  int y;
  cout << "\nPlease enter x coordinate: "<<endl;
  cin >> x;
  cout << "\nPlease enter y coordinate: "<< endl;
  cin >> y;

  Point *p = new Point (x,y);

  p->setX(x);
  p->setY(y);
  cout << "The x you entered: "<< p->getX() << ". The y you entered: " << p->getY() << endl;
  cout << "\nThe x, y distance is: " << p->displacement(x,y)<< endl;
  delete p;
  
  return 0; 
} 
