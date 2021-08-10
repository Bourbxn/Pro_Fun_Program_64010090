#include<stdio.h>
int main(){
  int date,month,year,day_num,alldaynext,alldaythis,allday;
  char day[3];
  printf("Enter Date : ");
  scanf("%s %d/%d/%d", &day, &date, &month, &year);
  int yearAD=year-543;
  if(day[0]=='M' && day[1]=='O' && day[2]=='N')day_num=1;
  else if(day[0]=='T' && day[1]=='U' && day[2]=='E')day_num=2;
  else if(day[0]=='W' && day[1]=='E' && day[2]=='D')day_num=3;
  else if(day[0]=='T' && day[1]=='H' && day[2]=='U')day_num=4;
  else if(day[0]=='F' && day[1]=='R' && day[2]=='I')day_num=5;
  else if(day[0]=='S' && day[1]=='A' && day[2]=='T')day_num=6;
  else if(day[0]=='S' && day[1]=='U' && day[2]=='N')day_num=7;
  if(month==1){     //JAN
    alldaythis=31-date;
    if((yearAD%4==0 && yearAD%100!=0)||(yearAD%4==0 && yearAD%100==0 && yearAD%400==0)){
      alldaynext=29+31+30+31+30+31;
    }
    else if((yearAD%4!=0)||(yearAD%4==0 && yearAD%100==0 && yearAD%400!=0)){
      alldaynext=28+31+30+31+30+31;
    }
    day_num+=alldaythis+alldaynext;
    day_num%=7;
    allday=alldaythis+alldaynext+(8-day_num);
    date=8-day_num;
  }
  else if(month==2){      //FEB
    if((yearAD%4==0 && yearAD%100!=0)||(yearAD%4==0 && yearAD%100==0 && yearAD%400==0)){
      alldaythis=29-date;
    }
    else if((yearAD%4!=0)||(yearAD%4==0 && yearAD%100==0 && yearAD%400!=0)){
      alldaythis=28-date;
    }
    alldaynext=31+30+31+30+31;
    day_num+=alldaythis+alldaynext;
    day_num%=7;
    allday=alldaythis+alldaynext+(8-day_num);
    date=8-day_num;
  }
  else if(month==3){      //MAR
    alldaythis=31-date;
    alldaynext=30+31+30+31;
    day_num+=alldaythis+alldaynext;
    day_num%=7;
    allday=alldaythis+alldaynext+(8-day_num);
    date=8-day_num;
  }
  else if(month==4){      //APR
    alldaythis=30-date;
    alldaynext=31+30+31;
    day_num+=alldaythis+alldaynext;
    day_num%=7;
    allday=alldaythis+alldaynext+(8-day_num);
    date=8-day_num;
  }
  else if(month==5){      //MAY
    alldaythis=31-date;
    alldaynext=30+31;
    day_num+=alldaythis+alldaynext;
    day_num%=7;
    allday=alldaythis+alldaynext+(8-day_num);
    date=8-day_num;
  }
  else if(month==6){      //JUN
    alldaythis=30-date;
    alldaynext=31;
    day_num+=alldaythis+alldaynext;
    day_num%=7;
    allday=alldaythis+alldaynext+(8-day_num);
    date=8-day_num;
  }
  else if(month==7){      //JUL
    alldaythis=31-date;
    day_num+=alldaythis;
    day_num%=7;
    allday=alldaythis+(8-day_num);
    date=8-day_num;
  }
  else if(month==8){      //AUG
    if(date==1 && day_num==7){
      date+=1;
      allday=1;
    }
    else if((date==1 || date==2) && day_num==1)allday=0;
    else if(day_num==2 && (date==1)){
      date+=6;
      allday=6;
    }
    else if(day_num==3 && (date==1||date==2)){
      date+=5;
      allday=5;
    }
    else if(day_num==4 && (date==1||date==2||date==3)){
      date+=4;
      allday=4;
    }
    else if(day_num==5 && (date==1||date==2||date==3||date==4)){
      date+=3;
      allday=3;
    }
    else if(day_num==6 && (date==1||date==2||date==3||date==4||date==5)){
      date+=2;
      allday=2;
    }
    else{

      yearAD+=1;
      alldaythis=31-date;
      if((yearAD%4==0 && yearAD%100!=0)||(yearAD%4==0 && yearAD%100==0 && yearAD%400==0)){
        alldaynext=30+31+30+31+31+29+31+30+31+30+31;
      }
      else if((yearAD%4!=0)||(yearAD%4==0 && yearAD%100==0 && yearAD%400!=0)){
        alldaynext=30+31+30+31+31+28+31+30+31+30+31;
      }
      day_num+=alldaythis+alldaynext;
      day_num%=7;
      allday=alldaythis+alldaynext+(8-day_num);
      date=8-day_num;
      year+=1;
    }
  }
  else if(month==9){      //SEP
    yearAD+=1;
    alldaythis=30-date;
    if((yearAD%4==0 && yearAD%100!=0)||(yearAD%4==0 && yearAD%100==0 && yearAD%400==0)){
      alldaynext=31+30+31+31+29+31+30+31+30+31;
    }
    else if((yearAD%4!=0)||(yearAD%4==0 && yearAD%100==0 && yearAD%400!=0)){
      alldaynext=31+30+31+31+28+31+30+31+30+31;
    }
    day_num+=alldaythis+alldaynext;
    day_num%=7;
    allday=alldaythis+alldaynext+(8-day_num);
    date=8-day_num;
    year+=1;
  }
  else if(month==10){      //OCT
    yearAD+=1;
    alldaythis=31-date;
    if((yearAD%4==0 && yearAD%100!=0)||(yearAD%4==0 && yearAD%100==0 && yearAD%400==0)){
      alldaynext=30+31+31+29+31+30+31+30+31;
    }
    else if((yearAD%4!=0)||(yearAD%4==0 && yearAD%100==0 && yearAD%400!=0)){
      alldaynext=30+31+31+28+31+30+31+30+31;
    }
    day_num+=alldaythis+alldaynext;
    day_num%=7;
    allday=alldaythis+alldaynext+(8-day_num);
    date=8-day_num;
    year+=1;
  }
  else if(month==11){      //NOV
    yearAD+=1;
    alldaythis=30-date;
    if((yearAD%4==0 && yearAD%100!=0)||(yearAD%4==0 && yearAD%100==0 && yearAD%400==0)){
      alldaynext=31+31+29+31+30+31+30+31;
    }
    else if((yearAD%4!=0)||(yearAD%4==0 && yearAD%100==0 && yearAD%400!=0)){
      alldaynext=31+31+28+31+30+31+30+31;
    }
    day_num+=alldaythis+alldaynext;
    day_num%=7;
    allday=alldaythis+alldaynext+(8-day_num);
    date=8-day_num;
    year+=1;
  }
  else if(month==12){      //DEC
    yearAD+=1;
    alldaythis=31-date;
    if((yearAD%4==0 && yearAD%100!=0)||(yearAD%4==0 && yearAD%100==0 && yearAD%400==0)){
      alldaynext=31+29+31+30+31+30+31;
    }
    else if((yearAD%4!=0)||(yearAD%4==0 && yearAD%100==0 && yearAD%400!=0)){
      alldaynext=31+28+31+30+31+30+31;
    }
    day_num+=alldaythis+alldaynext;
    day_num%=7;
    allday=alldaythis+alldaynext+(8-day_num);
    date=8-day_num;
    year+=1;
  }
  printf("KMITL Semester starts : ");
  printf("MON ");
  if(date<10)printf("0%d/", date);
  else{printf("%d/", date);}
  printf("08/");
  printf("%d\n", year);
  printf("Days left to starts Semester : %d",allday);
}
