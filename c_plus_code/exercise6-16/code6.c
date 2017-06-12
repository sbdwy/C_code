#include <stdio.h>
int main()
{
  int i;
  int min, max;
  printf("这是一个打印整数的平方数与立方数的程序。\n");
  printf("请输入最大值：");
  scanf("%d",&max);
  printf("请输入最小值：");
  scanf("%d",&min);
  for (i = min; i < max; i++){
    printf("%d\t%d\t%d\n",i,i*i,i*i*i);
    }
  return 0;
}
