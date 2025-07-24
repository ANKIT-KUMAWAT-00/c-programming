#include<stdio.h>
int main(){
    int a=10; char b='a';
    int *p1=&a; char *p2=&b;
    printf("memory taken by int pointer is %d bytes\n",sizeof(p1));
    printf("memory taken by char pointer is %d bytes\n",sizeof(p2));
}