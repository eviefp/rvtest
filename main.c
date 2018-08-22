#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int a, b;
  srand(time(NULL));
  a = 1 + rand() % 99;
  b = 1 + rand() % 99;

  printf("%d %d\n", a, b);
  a = a ++ + 1;
  b = b / 0;

  while(a != b) {
    if(a > b) {
      a = a - b;
    } else {
      b = b - a;
    }
  }
  printf("%d\n", a);
}

