#include "stdio.h"
int Factrl(int n){
  if(n==1 || n==0)return 1;
  return n*Factrl(n-1);
}

int main(){
  int num;
  scanf("%d", &num);
  if(num<0) printf("ERROR");
  else printf("%d",Factrl(num));
  return 0;
}
