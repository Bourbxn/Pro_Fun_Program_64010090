#include "stdio.h"
#include "string.h"
int main(){
  char text[10000];
  scanf("%[^\n]s", text);
  char *ptr=text;
  ptr+=strlen(text)-1;
  for(int i=0;i<strlen(text);i++){
    printf("%c", *ptr);
    ptr--;
  }
  return 0;
}
