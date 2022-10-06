#include "stdio.h"
#include "string.h"
int main(){
  char inpt[10000];
  gets(inpt);
  for(int j=strlen(inpt);j>0;j--){
    for(int k=0;k<j;k++){
      printf("%c", inpt[k]);
    }
    if(j!=1)printf("\n");
  }
  return 0;
}
