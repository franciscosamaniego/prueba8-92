#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void upper(char *s) {
  int i = 0;
  while(s[i] != 0) {
    if(s[i] >= 'a' && s[i] <= 'z') s[i] -=32;
    i++;
  }
}

int main(int argc, char *argv[]) {
  char *pal = argv[1];
  upper(pal);
  printf("%s\n", pal);
  return 0;
}
