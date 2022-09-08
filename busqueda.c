#include <stdio.h>
#include <stdlib.h>

void find(int n) {
  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  for(int i = 0; i < 10; i++) {
    if(arr[i] == n)  printf("%d\n", i);
  }
  if(arr == 0) printf("-1\n");
}

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  find(n);
  return 0;
}
