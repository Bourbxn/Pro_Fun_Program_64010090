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
  printf("A+B :", );
}



/*
a11 a12 a13
a21 a22 a23
a31 a32 a33
*/
