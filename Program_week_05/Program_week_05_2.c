#include "stdio.h"
int main(){
  char word[10000];
  scanf("%s", &word);
  int i=0;
  while(word[i]!='\0'){
    if(word[i]>=65 && word[i]<=90)printf("%c", word[i]+32);
    else if(word[i]>=97 && word[i]<=122) printf("%c", word[i]-32);
    i++;
  }
  return 0;
}
