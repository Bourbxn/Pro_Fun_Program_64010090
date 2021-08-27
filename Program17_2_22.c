#include "stdio.h"
int main(){
  int num,i=1,check=1;
  scanf("%d", &num);
  while(i<=num*num){
    printf("%d\n", i);
    if(check==1)printf("*");
    else if(i%(num*2)==0)printf("");      //Remove Space
    else if(i%num==0)printf("");      //Remove Space
    else printf(" ");
    check = !check;
    if(i%num==0 && i!=num*num)printf("\n");
    if(num%2==0 && i%num==0)check = !check;
    i++;
  }
  return 0;
}
