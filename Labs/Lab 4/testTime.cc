// Name: Yinsheng Dong
// Student Number: 11148648
// NSID: yid164
// Lecture Section: CMPT 115 (02)



#include <iostream>
using namespace std;

#include <cstdlib>
#include "myTime.h"

int main(){
  myTime *t;
  t = createTime();

  addHour(t);
  
  destroyTime(t);
  return EXIT_SUCCESS;
}
