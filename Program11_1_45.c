#include "stdio.h"
int Factrl(int n){
  int rslt=1;
  for(int i=n;i>0;i--){
    rslt*=i;
  }
  return rslt;
}

int main(){
  int num;
  scanf("%d", &num);
  printf("%d",Factrl(num));
}
