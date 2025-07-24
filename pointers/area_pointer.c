#include<stdio.h>
int main(){
    double radius,area=0.0;
    double *pradius=&radius,*parea=&area;
    scanf("%lf",pradius);
    area=3.14*(*pradius)*(*pradius);
    printf("Area of circle is %lf",*parea);
}