#include "stdio.h"
int main(){
  char word[10000];
  char Upper[]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  char Lower[]={"abcdefghijklmnopqrstuvwxyz"};
  int i=0;
  scanf("%s", &word);
  while(word[i]!='\0'){
    for(int j=0;j<26;j++){
      if(word[i]==Upper[j]) printf("%c", Lower[j]);
      else if(word[i]==Lower[j]) printf("%c", Upper[j]);
    }
    i++;
  }
  return 0;
}
