#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int main(){
 printf("firstly ye isko print karega jo tu padh rha hai");
 int c,d;
 scanf("%d",&c);
 scanf("%d",&d);
 int sum =add(c,d);
 printf("%d",sum);
}