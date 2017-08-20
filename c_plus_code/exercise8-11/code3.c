#include <stdio.h>
#include <ctype.h>

int main(){
  char c;
  int i, j;
  i = j = 0;
  while ( (c = getchar()) != EOF){
    if ( islower(c))
      i++;
    if ( isupper(c))
      j++;
  }
  printf("小写字母：%d,大写字母：%d\n",i,j);
  return 0;
}
