#include <stdio.h>
#include <stdlib.h>

void fib() {
  int arr[11];
  arr[0] = 0;
  arr[1] = 1;
  printf("%d ", arr[0]);
  printf("%d ", arr[1]);
  for(int i = 2; i < 11; i++) {
    arr[i] = arr[i-1] + arr[i-2];
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main(void) {
  fib();
  return 0;
}
