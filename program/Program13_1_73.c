#include "stdio.h"
int main(){
  int num,num2,numMain;
  printf("Enter Number : ");
  scanf("%d", &num);
  if(num<1 || num>1000000){
    printf("\nRoman Numerals : ERROR\n");
    return 0;
  }
  for(int i=0;i<2;i++){
    int Dcheck;
    num2=num;
    if(i==1) printf("Roman Numerals : ");
    else printf("                 ");
    while(1){
      if(num==1000000){     //10^6
        if(i==0)printf("_");
        else printf("M");
        num-=1000000;
      }
      else if(num/900000!=0){
        if(i==0)printf("__");
        else printf("CM");
        num-=900000;
      }
      else if(num/500000!=0){
        if(i==0)printf("_");
        else printf("D");
        num-=500000;
      }
      else if(num/400000!=0){
        if(i==0)printf("__");
        else printf("CD");
        num-=400000;
      }
      else if(num/100000!=0){     //10^5 UP
        if(i==0)printf("_");
        else printf("C");
        num-=100000;
      }
      else if(num/90000!=0){
        if(i==0)printf("__");
        else printf("XC");
        num-=90000;
      }
      else if(num/50000!=0){
        if(i==0)printf("_");
        else printf("L");
        num-=50000;
      }
      else if(num/40000!=0){
        if(i==0)printf("__");
        else printf("XL");
        num-=40000;
      }
      else if(num/10000!=0){      //10^4 UP
        if(i==0)printf("_");
        else printf("X");
        num-=10000;
      }
      else if(num/9000!=0){
        if(i==0)printf("__");
        else printf("IX");
        num-=9000;
      }
      else if(num/5000!=0){
        if(i==0)printf("_");
        else printf("V");
        Dcheck=1;
        num-=5000;
      }
      else if(num/4000!=0){
        if(i==0)printf("__");
        else printf("IV");
        num-=4000;
      }
      else if(num/1000!=0 && Dcheck==1){     //10^3 UP
        if(i==0)printf("_");
        else printf("I");
        num-=1000;
      }
    else if(num/1000!=0 && Dcheck!=1){
        if(i==0)printf(" ");
        else printf("M");
        num-=1000;
      }
      else if(num/900!=0){
        if(i==0)printf("  ");
        else printf("CM");
        num-=900;
      }
      else if(num/500!=0){
        if(i==0)printf(" ");
        else printf("D");
        num-=500;
      }
      else if(num/400!=0){
        if(i==0)printf("  ");
        else printf("CD");
        num-=400;
      }
      else if(num/100!=0){      //10^2 UP
        if(i==0)printf(" ");
        else printf("C");
        num-=100;
      }
      else if(num/90!=0){
        if(i==0)printf("  ");
        else printf("XC");
        num-=90;
      }
      else if(num/50!=0){
        if(i==0)printf(" ");
        else printf("L");
        num-=50;
      }
      else if(num/40!=0){
        if(i==0)printf("  ");
        else printf("XL");
        num-=40;
      }
      else if(num/10!=0){     //10^1 UP
        if(i==0)printf(" ");
        else printf("X");
        num-=10;
      }
      else if(num/9!=0){
        if(i==0)printf("  ");
        else printf("IX");
        num-=9;
      }
      else if(num/5!=0){
        if(i==0)printf(" ");
        else printf("V");
        num-=5;
      }
      else if(num/4!=0){
        if(i==0)printf("  ");
        else printf("IV");
        num-=4;
      }
      else if(num/1!=0){
        if(i==0)printf(" ");
        else printf("I");
        num-=1;
      }
      else if(num==0)break;
    }
    num=num2;
    printf("\n");
  }
  return 0;
}
