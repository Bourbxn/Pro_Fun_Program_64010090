#include "stdio.h"
int main(){
  int a11,a12,a13,a21,a22,a23,a31,a32,a33;
  int b11,b12,b13,b21,b22,b23,b31,b32,b33;
  int detA,detB;
  scanf("%d %d %d %d %d %d %d %d %d", &a11,&a12,&a13,&a21,&a22,&a23,&a31,&a32,&a33);
  scanf("%d %d %d %d %d %d %d %d %d", &b11,&b12,&b13,&b21,&b22,&b23,&b31,&b32,&b33);
  detA=((a11*a22*a33)+(a12*a23*a31)+(a13*a12*a32))-((a31*a22*a13)+(a32*a23*a11)+(a33*a21*a11));
  detB=((b11*b22*b33)+(b12*b23*b31)+(b13*b12*b32))-((b31*b22*b13)+(b32*b23*b11)+(b33*b21*b11));
  printf("detA : %d\ndetB : %d\n", detA,detB);
  printf("A+B : ");
  printf("%d %d %d\n      %d %d %d\n      %d %d %d\n", a11+b11,a12+b12,a13+b13,a21+b21,a22+b22
  ,a23+b23,a31+b31,a32+b32,a33+b33);
  printf("A-B : ");
  printf("%d %d %d\n      %d %d %d\n      %d %d %d\n", a11-b11,a12-b12,a13-b13,a21-b21,a22-b22
  ,a23-b23,a31-b31,a32-b32,a33-b33);
  printf("A.B : ");
  printf("%d %d %d\n      %d %d %d\n      %d %d %d\n", a11*b11+a12*b21+a13*b31,a11*b12+a12*b22+a13*b32
  ,a11*b13+a12*b23+a13*b33,a21*b11+a22*b21+a23*b31,a21*b12+a22*b22+a23*b32,a21*b13+a22*b23+a23*b33
  ,a31*b11+a32*b21+a33*b31,a31*b12+a32*b22+a33*b32,a31*b13+a32*b23+a33*b33);
}



/*
a11 a12 a13
a21 a22 a23
a31 a32 a33

b11 b12 b13
b21 b22 b23
b31 b32 b33
*/
