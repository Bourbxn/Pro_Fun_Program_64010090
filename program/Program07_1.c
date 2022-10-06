#include<stdio.h>
int main(){
  int sequence,prime_seq=1,start_num=2,prime_num;
  printf("Sequence of Prime number : ");
  scanf("%d",&sequence);
  while(prime_seq<sequence){
    start_num++;
    int fac=2,fac_check=0;
    while(fac<=start_num){
      if(start_num%fac==0){
        fac_check+=1;
        fac++;
      }
      else{fac++;}
    }
    if(fac_check==1)prime_seq++;
    if(prime_seq==sequence)prime_num=start_num;
  }
  printf("This Prime number >> %d", start_num);
  return 0;
}
