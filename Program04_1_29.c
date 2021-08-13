#include "stdio.h"
int main(){
  float s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,avg;
  scanf("%f %f %f %f %f %f %f %f %f %f", &s1,&s2,&s3,&s4,&s5,&s6,&s7,&s8,&s9,&s10);
  avg=(s1+s2+s3+s4+s5+s6+s7+s8+s9+s10)/10;
  printf("%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f\n",s1,s2,s3,s4,s5,s6,s7,s8,s9,s10);
  printf("%.2f", avg);
}
