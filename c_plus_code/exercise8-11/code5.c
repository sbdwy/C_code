#include <stdio.h>
#include <ctype.h>
int main()
{
  char c;
  int lower, upper , num;
  lower = 0;
  upper = 100;
  num = 50;
  printf("猜数字游戏\n前按任意键开始\n");
  while ( (c = getchar()) != 'c'){
    if ( c == 'a'){
      upper = num;
    }else if ( c == 'b'){
      lower = num;
    }
    getchar();
    num = (lower + upper) / 2;
    printf("我猜的数字是:%d\n",num);
    printf("a.猜大了\tb.猜小了\tc.对了\n");
  }
  return 0;
}
