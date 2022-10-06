#include "stdio.h"
int main(){
  char num[10000];
  int dgt=0;
  printf("Enter Number : ");
  scanf("%s", &num);
  while(num[++dgt]!='\0');
  for(int j=0;j<2;j++){
    if(j==1) printf("Roman Numerals : ");
    else printf("                 ");
    for(int i=0;i<dgt;i++){
      if(dgt-i==7){
        if(j==0){
          if(num[i]-48==1) printf("_");     //1m
        }
        else if(j==1){
          if(num[i]-48==1) printf("M");     //1m
        }
      }
      if(dgt-i==6){
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
      else if(dgt-i==5){
        if(j==0){
          if(num[i]-48==1) printf("_");     //10k
          else if(num[i]-48==2) printf("__");     //20k
          else if(num[i]-48==3) printf("___");     //30k
          else if(num[i]-48==4) printf("__");     //40k
          else if(num[i]-48==5) printf("_");     //50k
          else if(num[i]-48==6) printf("__");     //60k
          else if(num[i]-48==7) printf("___");     //70k
          else if(num[i]-48==8) printf("____");     //80k
          else if(num[i]-48==9) printf("__");     //90k
        }
        else if(j==1){
          if(num[i]-48==1) printf("X");     //10k
          else if(num[i]-48==2) printf("XX");     //20k
          else if(num[i]-48==3) printf("XXX");     //30k
          else if(num[i]-48==4) printf("XL");     //40k
          else if(num[i]-48==5) printf("L");     //50k
          else if(num[i]-48==6) printf("LX");     //60k
          else if(num[i]-48==7) printf("LXX");     //70k
          else if(num[i]-48==8) printf("LXXX");     //80k
          else if(num[i]-48==9) printf("XC");     //90k
        }
      }
      else if(dgt-i==4){
        if(j==0){
          if(num[i]-48==1) printf(" ");     //1k
          else if(num[i]-48==2) printf("  ");     //2k
          else if(num[i]-48==3) printf("   ");     //3k
          else if(num[i]-48==4) printf("__");     //4k
          else if(num[i]-48==5) printf("_");     //5k
          else if(num[i]-48==6) printf("__");     //6k
          else if(num[i]-48==7) printf("___");     //7k
          else if(num[i]-48==8) printf("____");     //8k
          else if(num[i]-48==9) printf("__");     //9k
        }
        else if(j==1){
          if(num[i]-48==1) printf("M");     //1k
          else if(num[i]-48==2) printf("MM");     //2k
          else if(num[i]-48==3) printf("MMM");     //3k
          else if(num[i]-48==4) printf("IV");     //4k
          else if(num[i]-48==5) printf("V");     //5k
          else if(num[i]-48==6) printf("VI");     //6k
          else if(num[i]-48==7) printf("VII");     //7k
          else if(num[i]-48==8) printf("VIII");     //8k
          else if(num[i]-48==9) printf("IX");     //9k
        }
      }
      else if(dgt-i==3){
        if(j==0){
          if(num[i]-48==1) printf(" ");     //100
          else if(num[i]-48==2) printf("  ");     //200
          else if(num[i]-48==3) printf("   ");     //300
          else if(num[i]-48==4) printf("  ");     //400
          else if(num[i]-48==5) printf(" ");     //500
          else if(num[i]-48==6) printf("  ");     //600
          else if(num[i]-48==7) printf("   ");     //700
          else if(num[i]-48==8) printf("    ");     //800
          else if(num[i]-48==9) printf("  ");     //900
        }
        else if(j==1){
          if(num[i]-48==1) printf("C");     //100
          else if(num[i]-48==2) printf("CC");     //200
          else if(num[i]-48==3) printf("CCC");     //300
          else if(num[i]-48==4) printf("CD");     //400
          else if(num[i]-48==5) printf("D");     //500
          else if(num[i]-48==6) printf("DC");     //600
          else if(num[i]-48==7) printf("DCC");     //700
          else if(num[i]-48==8) printf("DCCC");     //800
          else if(num[i]-48==9) printf("CM");     //900
        }
      }
      else if(dgt-i==2){
        if(j==0){
          if(num[i]-48==1) printf(" ");     //10
          else if(num[i]-48==2) printf("  ");     //20
          else if(num[i]-48==3) printf("   ");     //30
          else if(num[i]-48==4) printf("  ");     //40
          else if(num[i]-48==5) printf(" ");     //50
          else if(num[i]-48==6) printf("  ");     //60
          else if(num[i]-48==7) printf("   ");     //70
          else if(num[i]-48==8) printf("    ");     //80
          else if(num[i]-48==9) printf("  ");     //90
        }
        else if(j==1){
          if(num[i]-48==1) printf("X");     //10
          else if(num[i]-48==2) printf("XX");     //20
          else if(num[i]-48==3) printf("XXX");     //30
          else if(num[i]-48==4) printf("XL");     //40
          else if(num[i]-48==5) printf("L");     //50
          else if(num[i]-48==6) printf("LX");     //60
          else if(num[i]-48==7) printf("LXX");     //70
          else if(num[i]-48==8) printf("LXXX");     //80
          else if(num[i]-48==9) printf("XC");     //90
        }
      }
      else if(dgt-i==1){
        if(j==0){
          if(num[i]-48==1) printf(" ");     //1
          else if(num[i]-48==2) printf("  ");     //2
          else if(num[i]-48==3) printf("   ");     //3
          else if(num[i]-48==4) printf("  ");     //4
          else if(num[i]-48==5) printf(" ");     //5
          else if(num[i]-48==6) printf("  ");     //6
          else if(num[i]-48==7) printf("   ");     //7
          else if(num[i]-48==8) printf("    ");     //8
          else if(num[i]-48==9) printf("  ");     //
        }
        else if(j==1){
          if(num[i]-48==1) printf("I");     //1
          else if(num[i]-48==2) printf("II");     //2
          else if(num[i]-48==3) printf("III");     //3
          else if(num[i]-48==4) printf("IV");     //4
          else if(num[i]-48==5) printf("V");     //5
          else if(num[i]-48==6) printf("VI");     //6
          else if(num[i]-48==7) printf("VII");     //7
          else if(num[i]-48==8) printf("VIII");     //8
          else if(num[i]-48==9) printf("IX");     //9
        }
      }
    }
    printf("\n");
  }
}
