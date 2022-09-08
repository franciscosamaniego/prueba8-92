#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int arr[n];
  for(int i = 2; i < n+2; i++) {
    arr[i-2] = atoi(argv[i]);
    printf("%d\n", arr[i-2]);
  }
  return 0;
}
