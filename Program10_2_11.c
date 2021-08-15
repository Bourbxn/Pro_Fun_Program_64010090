#include "stdio.h"
int main(){
  int lst[3],max,sum=0;
  for(int i=0;i<3;i++){
    scanf("%d", &lst[i]);
    sum+=lst[i];
  }
  for(int i=0;i<3;i++){
    if(i==0)max=lst[i];
    if(lst[i]>=max)max=lst[i];
  }
  printf("%d",sum-max);
}
