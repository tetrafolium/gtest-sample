#include "euclidean-algo.h"

int greatest_common_divisor(int a, int b) {
  int r, tmp;
  if(a<b){
    tmp = a;
    a = b;
    b = tmp;
  }
 
  r = a % b;
  while(r!=0){
    a = b;
    b = r;
    r = a % b;
  }
  return b;
}
