#include "stdio.h"
int main(){
  char inpt[10000];
  int i=0;
  scanf("%s", &inpt);
  while(inpt[++i]!='\0');
  for(int j=i;j>0;j--){
    for(int k=0;k<j;k++){
      printf("%c", inpt[k]);
    }
    if(j!=1)printf("\n");
  }
}
