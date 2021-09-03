#include "stdio.h"
int main(){
  int num;
  scanf("%d", &num);
  for(int i=1;i<=num;i++){
    for(int j=1;j<=num+i-1;j++){
      if(j>num-i) printf("*");
      else printf(" ");
    }
    printf("\n");
  }
}
/*
ww* num+i-1
w*** num+i-1
***** num+i-1
*/
