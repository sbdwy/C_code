#include <stdio.h>

int main()
{
  double a1[8];
  double a2[8]={0};
  int i;
  for ( i = 0 ; i < 8; i++){
    scanf("%lf",&a1[i]);
    a2[i] += a1[i];
  }
  for (i = 0; i < 8; i++){
    printf("%lf\t",a1[i]);
  }
  printf("\n");
  for (i = 0; i < 8; i++){
    printf("%lf\t",a2[i]);
  }
  printf("\n");
  return 0;
}
