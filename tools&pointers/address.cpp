#include "stdio.h"

int main(int argc, char const *argv[]) {
  int c = 10;
  int a[10];

  int* a_p = a;
  //a[11] = 22;
  a[2] = 4;

  *(a_p + 1) = 7;


  printf("%d\n", a[1]);

  int* c_p = &c;
  *c_p = 22; //
  printf("%u %u\n", &c, c_p);

  printf("%d\n", c);

  c = 23;

  printf("%d\n", c);

  return 0;
}

//rsp 1325397910
// rsp + 16 = &a
// rsp + 12 = &b

// 496...536
