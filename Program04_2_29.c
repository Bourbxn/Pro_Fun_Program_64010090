#include "stdio.h"
int main(){
  float height[10],sum=0;
  for(int i=0;i<10;i++){
    scanf("%f", &height[i]);
    sum+=height[i];
  }
  for(int i=0;i<10;i++){
    if(i==9)printf("%.2f\n", height[i]);
    else{printf("%.2f ", height[i]);}
  }
  printf("%.2f", sum/10);
}
