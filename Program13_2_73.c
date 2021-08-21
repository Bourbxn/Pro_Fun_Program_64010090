#include "stdio.h"
int main(){
  char num[10000];
  int dgt=0;
  scanf("%s", &num);
  while(num[++dgt]!='\0');
  for(int j=0;j<2;j++){
    for(int i=0;i<dgt;i++){
      if(dgt-1-i==5){
        if(j==0){
          if(num[i]-48==1) printf("_");     //100k
          else if(num[i]-48==2) printf("__");     //200k
          else if(num[i]-48==3) printf("___");     //300k
          else if(num[i]-48==4) printf("__");     //400k
          else if(num[i]-48==5) printf("_");     //500k
          else if(num[i]-48==6) printf("__");     //600k
          else if(num[i]-48==7) printf("___");     //700k
          else if(num[i]-48==8) printf("____");     //800k
          else if(num[i]-48==9) printf("__");     //900k
        }
        else if(j==1){
          if(num[i]-48==1) printf("C");     //100k
          else if(num[i]-48==2) printf("CC");     //200k
          else if(num[i]-48==3) printf("CCC");     //300k
          else if(num[i]-48==4) printf("CD");     //400k
          else if(num[i]-48==5) printf("D");     //500k
          else if(num[i]-48==6) printf("DC");     //600k
          else if(num[i]-48==7) printf("DCC");     //700k
          else if(num[i]-48==8) printf("DCCC");     //800k
          else if(num[i]-48==9) printf("CM");     //900k
        }
      }
    }
  }
}
