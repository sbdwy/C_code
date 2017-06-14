#include <stdio.h>
#include <string.h>
#define CNT 100
int main()
{
  int year = 0;
  double chu = 100;
  do{
    chu += chu *0.08;
    chu -= 10;
    year++;
    printf("第%d年，余额:%lf\n",year,chu);
  }while ( chu > 0);
  printf("%d年后取完.\n",year);
  return 0;
}
