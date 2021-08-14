#include "stdio.h"
int main(){
  int num;
  scanf("%d",&num);
  for(int i=1;i<=num;i++){
    for(int j=1;j<=num+i-1;j++){
      if(j<=num-i){
        printf(" ");
      }
      else{
        printf("*");
      }
    }
    if(i!=num)printf("\n");
  }
}
