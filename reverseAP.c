#include<stdio.h>
int main(){
    int a=50 ;
    float b=100000000;
    for(int i=1;i<=a;i++){
        printf("%.6f ",b);
        b/=2;

    }
}