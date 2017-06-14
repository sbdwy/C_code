#include <stdio.h>

int main()
{
  int rab , i;
  for( i = 1 , rab = 5; rab < 150; i++){
    rab -= i;
    rab *= rab;
    printf("第%d周，有%d个朋友.\n",i,rab);
  }
  return 0;
}
