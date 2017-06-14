#include <stdio.h>

int main()
{
  int a[8], i;
  for (i = 0; i < 8; i++)
    scanf("%d",&a[i]);
  for ( i = 7; i > -1; i--)
    printf("%d\n",a[i]);
  return 0;
}
