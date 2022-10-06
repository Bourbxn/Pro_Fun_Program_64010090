#include "stdio.h"
int main(){
  int work,mid,final,totalScore;
  scanf("%d %d %d",&work,&mid,&final );
  totalScore = work+mid+final;
  if(totalScore >= 80 && totalScore<=100) printf("A");
  else if(totalScore >= 75 && totalScore<80) printf("B+");
  else if(totalScore >= 70 && totalScore<75) printf("B");
  else if(totalScore >= 65 && totalScore<70) printf("C+");
  else if(totalScore >= 60 && totalScore<65) printf("C");
  else if(totalScore >= 55 && totalScore<60) printf("D+");
  else if(totalScore >= 50 && totalScore<55) printf("D");
  else if(totalScore >= 0 && totalScore< 50) printf("F");
  else printf("ERROR");
  return 0;
}
