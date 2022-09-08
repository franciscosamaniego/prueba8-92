#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool comp(char *s, char *t) {
  bool res = false;
  if(strcmp(s, t) == 0)   res = true;
  return res;
}


int main(int argc, char *argv[]) {
  char *pal = argv[1];
  char *pal2 = argv[2];
  printf("%d\n", comp(pal,pal2));
  return 0;
}
