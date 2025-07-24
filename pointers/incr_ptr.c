#include<stdio.h>
int main(){
    int a[6]={1,2,3,4,5,6},b,c;
    int *ptr=a;
    printf("a = %d\n",*ptr);
    int *ptr1=&a[0];
    ptr++;
    printf("a = %d\n",*ptr);
    ptr+=2;
    printf("a = %d",*ptr);
    ptr-=3;
    printf("\na = %d",*ptr);
}