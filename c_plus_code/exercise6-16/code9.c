#include <stdio.h> 
int formula(int a, int b);
int main()
{
  int lower ;//上限数要大于下限数，否则终止程序.
  int upper ;
  printf("Enter lower and upper integer limits:");
  scanf("%d %d",&lower,&upper);
  while (upper > lower){
    printf("The sums of the aquares from %d to %d is %d\n",
	   lower*lower,upper*upper,formula(lower,upper));
    printf("Enter next ser of limits:");
    scanf("%d %d",&lower,&upper);
  }
  printf("Done\n");
  return 0;
}

int formula(int a, int b)
{
  int sum;
  while (a <= b){
    sum += a*a;
    a++;
  }
  return sum;
}
