#include "stdio.h"
int main(){
  int num1,num2,num3,rslt;
  scanf("%d %d %d",&num1,&num2,&num3);
  if(num1>=num2 && num1>=num3)rslt=num2+num3;
  else if(num2>=num1 && num2>=num3)rslt=num1+num3;
  else if(num3>=num1 && num3>=num2)rslt=num1+num2;
  printf("%d", rslt);
  return 0;
}
