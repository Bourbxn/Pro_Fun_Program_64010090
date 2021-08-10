#include<stdio.h>
int main(){
  int day,month,year,day_num,allday=0;
  char date[3];
  scanf("%s %d %d %d", &day, &date, &month, &year);
  int yearAD=year-543;
  if(day[0]=='M' && day[1]=='O' && day[2]=='N')date_num=1;
  else if(day[0]=='T' && day[1]=='U' && day[2]=='E')day_num=2;
  else if(day[0]=='W' && day[1]=='E' && day[2]=='D')day_num=3;
  else if(day[0]=='T' && day[1]=='H' && day[2]=='U')day_num=4;
  else if(day[0]=='F' && day[1]=='R' && day[2]=='I')day_num=5;
  else if(day[0]=='S' && day[1]=='A' && day[2]=='T')day_num=6;
  else if(day[0]=='S' && day[1]=='U' && day[2]=='N')day_num=7;
  while(day_num==1 && month==8){
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
      if(day==32){
        month+=1;
        day=1;
      }
      else{
        day+=1;
        allday+=1;
        day_num+=1;
        if(day_num==8)day_num=1;
      }
    }
    else if(month==4 || month==6 || month==9 || month==11){
      if(day==31){
        month+=1;
        day=1;
      }
      else{
        day+=1;
        allday+=1;
        day_num+=1;
        if(day_num==8)day_num=1;
      }
    }
    else if(month==2){
      if((yearAD%4==0 && yearAD%100!=0)||(yearAD%4==0 && yearAD%100==0 && yearAD%400=0)){ //29
        if(day==30){
          month+=1;
          day=1;
        }
        else{
          day+=1;
          allday+=1;
          day_num+=1;
          if(day_num==8)day_num=1;
        }
      }
      else if((yearAD%4!=0)||(yearAD%4==0 && yearAD%100==0 && yearAD%400!=0)){ //28
        if(day==29){
          month+=1;
          day=1;
        }
        else{
          day+=1;
          allday+=1;
          day_num+=1;
          if(day_num==8)day_num=1;
        }
      }
    }
    else if(month==13){
      year+=1;
      month=1;
      day=1;
    }
  }
  printf("%d", allday);
}
