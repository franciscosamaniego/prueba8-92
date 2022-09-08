#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int max(int *arr, int length) {
  int max = INT_MIN;
  for(int i = 0; i < length; i++) {
    if(arr[i] > max) max = arr[i];
  }
  return max;
}
int min(int *arr, int length) {
  int min = INT_MAX;
  for(int i = 0; i < length; i++) {
    if(arr[i] < min) min = arr[i];
  }
  return min;
}

float prom(int arr[], int length) {
  float cont = 0.0;
  for(int i = 0; i < length; i++) {
    cont += arr[i];
  }
  return cont/length;
}

int main(int argc, char *argv[]) {
  int arr[] = {1,2,5,6,7,10,24,0};
  int length = sizeof(arr)/sizeof(int);
  printf("%.2f\n", prom(arr,length));
  printf("%d\n", max(arr,length));
  printf("%d\n", min(arr,length));
  return 0;
}
