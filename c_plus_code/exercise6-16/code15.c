#include <stdio.h>
#include <string.h>
#define CNT 100
int main()
{
  int year = 0;
  double dap, dei;
  dap = 0;
  dei = 100;
  do {
    dap += CNT * 0.1;
    dei += dei * 0.05;
    year++;
  }while(dap+100 > dei);
  printf("需%d年,dei投资额：%.1lf超过dap投资额:%.1lf\n",year,dei,dap+100);
  return 0;
}
