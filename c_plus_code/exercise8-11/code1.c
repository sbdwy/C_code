#include <stdio.h>

int main ()
{
  char c;
  int i;
  for (i = 0;  (c=getchar()) != EOF; i++){
    ;
  }
  printf("文本的字符数是%d个.\n",i);
  return 0;
}
