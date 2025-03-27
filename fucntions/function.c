#include <stdio.h>
int fact(int n){
    if(n==1|| n==0) return 1;
    return n*fact(n-1); // base case   
}
int main()
{
    
    printf("Hello World\n");
 int n=5;
    
    printf("factorial of %d is %d",n,fact(n));
    return 0;
}