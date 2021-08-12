#include "stdio.h"
int main(){
  int num;
  scanf("%d", &num);
  for(int i=1;i<=num*2-1;i++){
    for(int j=1;j<=2*num-1;j++){
      if((j<=i-1 && i<=num)||(j<=num*2-1-i && i>num)){
        printf(" ");
      }
      else{
        printf("*");
      }
    }
    printf("\n");
  }
}
