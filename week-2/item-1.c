#include "stdio.h"
int main(){
  float s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,avg;
  printf("Enter Height of 10 students : ");
  scanf("%f %f %f %f %f %f %f %f %f %f", &s1,&s2,&s3,&s4,&s5,&s6,&s7,&s8,&s9,&s10);
  avg=(s1+s2+s3+s4+s5+s6+s7+s8+s9+s10)/10;
  printf("Student  1 : %.2f\n", s1);
  printf("Student  2 : %.2f\n", s2);
  printf("Student  3 : %.2f\n", s3);
  printf("Student  4 : %.2f\n", s4);
  printf("Student  5 : %.2f\n", s5);
  printf("Student  6 : %.2f\n", s6);
  printf("Student  7 : %.2f\n", s7);
  printf("Student  8 : %.2f\n", s8);
  printf("Student  9 : %.2f\n", s9);
  printf("Student 10 : %.2f\n", s10);
  printf("Average Height of 10 students = %.2f", avg);
  return 0;
}
