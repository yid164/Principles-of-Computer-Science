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
