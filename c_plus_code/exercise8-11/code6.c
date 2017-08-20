#include <stdio.h>

void choice_operation(float num1, float num2, char opera);
char choice(void);
float get_value(void);
int main()
{
  char c;
   float num1, num2;
  while ((c = choice()) != 'q'){
    printf("输入第一个值：");
    num1 = get_value();
    printf("输入第二个值：");
    num2 = get_value();
    choice_operation(num1,num2,c);
  }
  return 0;
}

char choice (void)
{
  char c;
  while (1){
    printf("选择你的运算。\n");
    printf("a.加\tb.减\n");
    printf("c.乘\td.除\nq.退出\n");
    c = getchar();
    if (c == 'a' || c == 'b' || c == 'd' || c == 'c' || c == 'q'){
      break;
    }
  }
  while (getchar() != '\n'){
    continue;
  }
  return c;
 }

float get_value(void)
{
  float num;
  while ( !(scanf("%f",&num)) ){
    while (getchar() != '\n'){
      continue;   
    }
      printf("请输入数字:");
    }
  getchar();
  return num;
}

void choice_operation(float num1, float num2, char opera)
{
  float num;
  char c;
  switch (opera){
  case 'a':
    num = num1 + num2;
    c = '+';
    break;
  case 'b':
    num = num1 - num2;
    c = '-';
    break;
  case 'c':
    num = num1 * num2;
    c = '*'; 
    break;
  case 'd':
    num = num1 / num2;
    c = '/';
    break;
  }
  printf("%.1f %c %.1f = %.1f\n",num1,c,num2,num);
}
