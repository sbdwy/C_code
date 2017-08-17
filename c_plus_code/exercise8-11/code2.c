#include <stdio.h>


int main ()
{
  char c, c2;
  int i = 0;
  while ( (c=getchar()) != EOF){
    c2 = c;
    if ( c < ' '){
      switch (c){
      case '\t':
	printf("\\t");
	break;
      case '\n':
	printf("\\n");
	break;
      default :
	printf("^");
	c2 += 64;
      }
    } 
    printf("%c%d  ",c2,c);
    i++;
    if ( i == 10){
      printf("\n");
      i = 0;
    }
  }
  return 0;
}
