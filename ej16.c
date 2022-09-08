#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void enesi() {
  int dos = 2 * 2;
  int cont = 0;
  for(int i = 0; i < 11; i++) {
    cont += pow(dos, dos);
  }
  printf("%d\n", cont);
}

int main(int argc, char *argv[]) {
  enesi();
  return 0;
}
