#include "stdio.h"
int main(){
  int lst[3],max;
  for(int i=0;i<3;i++){
    scanf("%d", &lst[i]);
  }
  for(int i=0;i<3;i++){
    if(i==0){
      if(lst[i]>=lst[i+1])max=lst[i];
      else{max=lst[i+1];}
    }
    if(lst[i]>=max)max=lst[i];
  }
  int min=max;
  for(int i=0;i<3;i++){
    if(lst[i]<=min)min=lst[i];
  }
  printf("%d", min+max);
}
