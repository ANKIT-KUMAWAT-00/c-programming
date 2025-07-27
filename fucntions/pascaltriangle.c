#include<stdio.h>
int factorial(int x){
    int fact = 1;
    for(int i = 1; i <= x; i++){
        fact *= i;
    }
    return fact;
}
int combination(int n, int r){
     int ncr = factorial(n) / (factorial(r) * factorial(n - r));
    return ncr;
}
int main(){
    int n;
    scanf("%d",&n);
    // scanf("%d",&r);
    // int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    // printf("%d\n",ncr);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            printf("%d ", combination(i, j));
        }
        printf("\n");
    }
}