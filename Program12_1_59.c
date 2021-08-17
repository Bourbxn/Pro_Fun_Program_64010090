#include "stdio.h"
int main(){
  char word[10000];
  int i=0;
  scanf("%s", &word);
  while(word[++i]!='\0');
  for(int j=i-1;j>=0;j--)printf("%c", word[j]);
}
