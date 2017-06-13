#include <stdio.h> 

double formula(double a, double b);

int main()
{
  double num1,num2;
  printf("输入两个浮点数，并打印结果.\n");
  while(scanf("%lf %lf",&num1,&num2) != 2)
    getchar();
  printf("%lf\n",formula(num1,num2));
  return 0;
}

double formula(double a, double b)
{
  return (a>b?(a-b)/(a*b):(b-a)/(a*b));
}
