#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int r(int a, int b) {
  srand(time(NULL));
  int r = (rand() % b - a) + a + 1;
  return r;
}

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  printf("%d\n", r(a,b));
  return 0;
}
