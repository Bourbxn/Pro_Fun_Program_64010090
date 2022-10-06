#include "stdio.h"
#include "string.h"
void MorseConvert(int numChar){
  if(numChar=='a' || numChar=='A') printf(".-");
  else if (numChar=='b' || numChar=='B') printf("-...");
  else if (numChar=='c' || numChar=='C') printf("-.-.");
  else if (numChar=='d' || numChar=='D') printf("-..");
  else if (numChar=='e' || numChar=='E') printf(".");
  else if (numChar=='f' || numChar=='F') printf("..-.");
  else if (numChar=='g' || numChar=='G') printf("--.");
  else if (numChar=='h' || numChar=='H') printf("....");
  else if (numChar=='i' || numChar=='I') printf("..");
  else if (numChar=='j' || numChar=='J') printf(".---");
  else if (numChar=='k' || numChar=='K') printf("-.-");
  else if (numChar=='l' || numChar=='L') printf(".-..");
  else if (numChar=='m' || numChar=='M') printf("--");
  else if (numChar=='n' || numChar=='N') printf("-.");
  else if (numChar=='o' || numChar=='O') printf("---");
  else if (numChar=='p' || numChar=='P') printf(".--.");
  else if (numChar=='q' || numChar=='Q') printf("--.-");
  else if (numChar=='r' || numChar=='R') printf(".-.");
  else if (numChar=='s' || numChar=='S') printf("...");
  else if (numChar=='t' || numChar=='T') printf("-");
  else if (numChar=='u' || numChar=='U') printf("..-");
  else if (numChar=='v' || numChar=='V') printf("...-");
  else if (numChar=='w' || numChar=='W') printf(".--");
  else if (numChar=='x' || numChar=='X') printf("-..-");
  else if (numChar=='y' || numChar=='Y') printf("-.--");
  else if (numChar=='z' || numChar=='Z') printf("--..");
  else printf("");
}

int main(){
  char sentc[10000];
  printf("Enter Text : ");
  scanf("%s", sentc);
  printf("Morse Code : ");
  for(int i=0;i<strlen(sentc);i++){
    MorseConvert(sentc[i]);
  }
}
