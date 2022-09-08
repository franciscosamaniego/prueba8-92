#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool palin(char *s) {
  int i = 0;
  bool res = false;
  while(s[i] != 0) {
    i++;
  }
  for(int j = 0; j < i/2; j++) {
    if(s[j] == s[i-j-1]) res = true;
  }
  return res;
}

int main(int argc, char *argv[]) {
  char *pal = argv[1];
  // printf("%d\n", palin(pal));
  if(palin(pal)) printf("Son palindrimos\n");
  else printf("No son palindromos\n");
  return 0;
}
