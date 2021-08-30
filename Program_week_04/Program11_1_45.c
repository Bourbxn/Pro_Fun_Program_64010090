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
  if(num<0) printf("ERROR");
  else printf("%d",Factrl(num));
  return 0;
}
