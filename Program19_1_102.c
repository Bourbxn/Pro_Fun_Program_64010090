#include "stdio.h"
#include "string.h"
int main(){
  char sentc[10000];
  printf("Enter Text : ");
  scanf("%[^\n]",sentc);
  printf("Morse Code : ");
  for(int i=0;i<strlen(sentc);i++){
    if(sentc[i]=='a' || sentc[i]=='A') printf(".-");
    else if (sentc[i]=='b' || sentc[i]=='B') printf("-...");
    else if (sentc[i]=='c' || sentc[i]=='C') printf("-.-.");
    else if (sentc[i]=='d' || sentc[i]=='D') printf("-..");
    else if (sentc[i]=='e' || sentc[i]=='E') printf(".");
    else if (sentc[i]=='f' || sentc[i]=='F') printf("..-.");
    else if (sentc[i]=='g' || sentc[i]=='G') printf("--.");
    else if (sentc[i]=='h' || sentc[i]=='H') printf("....");
    else if (sentc[i]=='i' || sentc[i]=='I') printf("..");
    else if (sentc[i]=='j' || sentc[i]=='J') printf(".---");
    else if (sentc[i]=='k' || sentc[i]=='K') printf("-.-");
    else if (sentc[i]=='l' || sentc[i]=='L') printf(".-..");
    else if (sentc[i]=='m' || sentc[i]=='M') printf("--");
    else if (sentc[i]=='n' || sentc[i]=='N') printf("-.");
    else if (sentc[i]=='o' || sentc[i]=='O') printf("---");
    else if (sentc[i]=='p' || sentc[i]=='P') printf(".--.");
    else if (sentc[i]=='q' || sentc[i]=='Q') printf("--.-");
    else if (sentc[i]=='r' || sentc[i]=='R') printf(".-.");
    else if (sentc[i]=='s' || sentc[i]=='S') printf("...");
    else if (sentc[i]=='t' || sentc[i]=='T') printf("-");
    else if (sentc[i]=='u' || sentc[i]=='U') printf("..-");
    else if (sentc[i]=='v' || sentc[i]=='V') printf("...-");
    else if (sentc[i]=='w' || sentc[i]=='W') printf(".--");
    else if (sentc[i]=='x' || sentc[i]=='X') printf("-..-");
    else if (sentc[i]=='y' || sentc[i]=='Y') printf("-.--");
    else if (sentc[i]=='z' || sentc[i]=='Z') printf("--..");
    else printf("");
  }
  return 0;
}
