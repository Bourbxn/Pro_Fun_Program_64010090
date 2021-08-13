#include "stdio.h"
int main(){
  int num;
  scanf("%d",&num);
  for(int i=num;i>=1;i--){
    for(int j=1;j<=num-i;j++){
      printf(" ");
    }
    for(int j=1;j<=i*2-1;j++){
      printf("*");
    }
    printf("\n");
  }
  for(int i=2;i<=num;i++){
    for(int j=1;j<=num-i;j++){
      printf(" ");
    }
    for(int j=1;j<=i*2-1;j++){
      printf("*");
    }
    if(i!=num)printf("\n");
  }
}
