#include <stdio.h>
#include <string.h>
int main()
{
  char a[20];
  int i;
  printf("读入一个单词，倒序输出。\n请输入一个单词：");
  scanf("%s",a);
  for (i = strlen(a)-1; i > -1; i--){
       printf("%c",a[i]);
  }
  printf("\n");
  return 0;
}
