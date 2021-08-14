#include "stdio.h"
int main(){
  char inpt[10000];
  int i=0;
  scanf("%s", &inpt);
  while(inpt[++i]!='\0');
  while(i>0){
    int j=0;
    while(j<i){
      printf("%c", inpt[j++]);
    }
    i--;
    if(i!=0)printf("\n");
  }
}
