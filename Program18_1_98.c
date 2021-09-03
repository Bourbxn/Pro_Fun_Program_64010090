#include "stdio.h"
int main(){
  char word[10000];
  int i=0,frog=0;
  scanf("%s", &word);
  while(word[i]!='\0'){
    if(word[i]=='F' || word[i]=='f'){
      i++;
      printf("loop f\n");
      if(word[i]=='R' || word[i]=='r'){
        i++;
          printf("loop r\n");
        if(word[i]=='O' || word[i]=='o'){
          i++;
            printf("loop o\n");
          if(word[i]=='G' || word[i]=='g'){
            printf("loop g\n");
            i++;
            frog++;
          }
          else{
            i++;
          }
        }
        else{
          i++;
        }
      }
      else{
        i++;
      }
    }
    else{
      i++;
    }
  }
  printf("%d\n", frog);
  printf("%d", i);
}
