#include "stdio.h"
int main(){
  int lst[3],min,max,sum=0;
  for(int i=0;i<3;i++){
    scanf("%d", &lst[i]);
    sum+=lst[i];
  }
  for(int i=0;i<3;i++){
    if(i==0)min=lst[i];
    if(lst[i]<=min)min=lst[i];
  }
  for(int i=0;i<3;i++){
    if(lst[i]>=min)max=lst[i];
  }
  printf("%d",max);
}
