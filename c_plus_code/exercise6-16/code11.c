#include <stdio.h>

int main()
{
  double sum1, sum2;
  int i, j, max;
  scanf("%d",&max);
  while ( max > 0){
    for ( i = 1, j = -1; i < max; i++, j *= -1){
      sum1 += 1.0/(i*1.0);
      sum2 += j*1.0/(i*1.0);
    }
    printf("%lf\n%lf\n",sum1,sum2);
    sum1 = sum2 = 0;
    scanf("%d",&max);
  }
  return 0;
}
