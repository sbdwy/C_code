#include <stdio.h>
int main()
{
  char c;
  int i, j, cnt;
  scanf("%c",&c);
  cnt = c - 'A';
  for ( i = 0; i <= cnt; i++){
    c = 'A'-1;
    for ( j = 0; j <= cnt + i; j++){
      if ( j < cnt-i ){
	printf(" ");
	continue;
      }else if ( j <= cnt )
	c++;
      else
	c--;
      printf("%c",c);
    }
    printf("\n");
  }
  return 0;
}
