#include "stdio.h"
int main(){
  float height[10],sum=0;
  printf("Enter Height of 10 students : ");
  for(int i=0;i<10;i++){
    scanf("%f", &height[i]);
    sum+=height[i];
  }
  for(int i=0;i<10;i++){
    if(i==9)printf("Student %d : %.2f\n", i+1,height[i]);
    else{printf("Student  %d : %.2f\n", i+1,height[i]);}
  }
  printf("Average Height of 10 students = %.2f", sum/10);
}
