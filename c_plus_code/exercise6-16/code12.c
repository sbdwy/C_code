#include <stdio.h>

int main()
{
  int a[8];
  int i, swap;
  swap = 1;
  for (i = 0; i < 8; i++){
    swap *= 2;
    a[i] = swap;
    printf("%d\n",a[i]);
  }
  return 0;
}
