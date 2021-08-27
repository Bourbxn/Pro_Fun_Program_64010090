#include "stdio.h"
int main(){
  char word[10000];
  char Upper[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S'
  ,'T','U','V','W','X','Y','Z'};
  char Lower[]={'a','b','b','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s'
  ,'t','u','v','w','x','y','z'};
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
