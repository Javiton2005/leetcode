#include <stdio.h>
#include <stdlib.h>
void main (){

  char *s = "III";

  int size = sizeof(s)/sizeof(s[0]);

  printf("%ld\n", sizeof(s[0]));
  printf("%ld\n", sizeof(s));
  printf("%d\n", size);

  exit(0);
}
