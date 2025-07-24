#include<stdio.h>
int main(){
    int a = 10;
    int*ptr;// declaration
    ptr = &a;
    printf("Address of a using ptr %d",ptr);
    printf("\n Address of a using & a %d", &a);
}