#include <stdio.h>
#include <string.h>
#define CNT 256
int main()
{
  char a[CNT];
  int i;
  printf("输入一行字符串，倒序输出");
  for (i = 0; i < CNT && a[i-1] != '\n'; i++)
    scanf("%c",&a[i]);
  a[i-1] = '\0';
  for (i = strlen(a)-1; i > -1; i--)
    printf("%c",a[i]);
  printf("\n");
  return 0;
}
