#include "stdio.h"
int main(){
  int num;
  scanf("%d",&num );
  if(num<=0) printf("ERROR");
  else if(num%2!=0){
    for(int i=1;i<=(num-1)/2;i++){      //PART TOP
      for(int j=1;j<=((num+1)/2)-1;j++) printf("* ");
      printf("*\n");
      for(int j=1;j<=((num+1)/2)-1;j++)printf(" *");
      printf("\n");
    }
    for(int i=1;i<=((num+1)/2)-1;i++) printf("* ");     //PART BOTTOM
    printf("*");
  }
  else{
    for(int i=1;i<=num/2;i++){      //PART TOP
      for(int j=1;j<=((num)/2)-1;j++) printf("* ");
      printf("*\n");
      for(int j=1;j<=((num)/2)-1;j++)printf(" *");
      printf(" *");
      if(i!=num/2)printf("\n");
    }
  }
  return 0;
}
