#include <stdio.h>
#include <ctype.h>

int main() {
  char c;
  int i, j, onoff;           //i计数字母，j计数单词。
  i = j = 0;
  while( (c = getchar()) != EOF){
    if ( isalpha(c) ){
      i++;
      onoff = 1;
    }else if ( isblank(c) && onoff ){
      j++;
      onoff = 0;
    }
  }
  if ( onoff )
    j++;
  printf("平均每个单词的字母数为：%lf\n",i/(double)j );
  return 0;
}
