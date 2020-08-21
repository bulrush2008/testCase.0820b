
#include <stdio.h>

#include "madd.h"

int main(int argc, char *argv[]) {
  printf("this is a c test file.\n");

  int a = 3, b = 2;
  int c = madd(a, b);
  printf("c = a + b = %d\n", c);

  return 0;
}
