#include<stdio.h>
int combination(int x){
    int fact = 1;
    for(int i = 1;i <=x ; i++){

        fact *=i;
    }
    return fact;
}
int main(){
    int n,r;
    printf("Enter values for n and r: ");
    scanf("%d %d", &n, &r);
    int nfact = combination(n)/(combination(r)*combination(n-r));
    int npr = combination(n)/combination(n-r);
    printf("Combination of %d and %d is: %d\n", n, r, nfact);
    printf("Permutation of %d and %d is: %d\n", n, r, npr);
    
    //ncr = n! / (r! * (n - r)!)
    // npr = n! / (n - r)! 
    return 0;
}