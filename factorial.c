#include <stdio.h>
#include <stdlib.h>


void factorial(int n) {
  int cont = 1;
  for(int i = 1; i < n+1; i++) {
    cont = cont * i;
    printf("%d\n", cont);
  }
}


int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  factorial(n);
  return 0;
}
