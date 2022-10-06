#include "stdio.h"
int main(){
  int work,mid,final,totalScore;
  char scoreList[] = {'F','F','F','F','F','D','C','B','A','A','A'};
  scanf("%d %d %d",&work,&mid,&final );
  totalScore = work+mid+final;
  if(totalScore>100 || totalScore<0) printf("ERROR");
  else{
    printf("%c", scoreList[totalScore/10]);
    if(totalScore%10>=5 && totalScore<80 & totalScore>=50) printf("+");
  }
  return 0;
}
