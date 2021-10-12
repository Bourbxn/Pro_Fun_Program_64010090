#include "stdio.h"
int main(){
  float num;
  scanf("%f", &num);
  if(num/2!=(int)num/2) printf("odd");
  else printf("even");
}
