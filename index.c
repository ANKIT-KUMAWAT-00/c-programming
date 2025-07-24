#include<stdio.h>
int main(){
    int a=19325;
    int original=a;
    int count = 0,ld=0,sum=0,rem=0,q=0,rev=0;
    
    while(a!=0){
    rem=a%10;
rev=rev*10+rem;
a/=10;


    }
    printf("%d\n",rev);
    printf("%d\n",sum);
    printf("%d ",rev+original);
  return 0;
}