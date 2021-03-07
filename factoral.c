
#include <stdio.h>
#define	F for (j = 0; j < 158;)

main() {
  int i, j, r[158] = {0};
  *r = i = 1;

  while(++i < 101) {
    F 
      r[j++] *= i;
    
    F {
      r[j+2] += r[j] / 100;
      r[j] %= 100;
      r[j+1] += r[j] / 10;
      r[j++] %= 10;
    }
  }
  F
    printf("%d", r[157 - j++]);
  
}
