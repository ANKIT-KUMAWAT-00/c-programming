#include<stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("%d", &a);
    double result = sqrt(a);
    double power = pow(a, result);
    // double minn=min(a, result);
    // double maxx=max(a, result);
    printf("The square root of %d is: %.2f\n", a, result);
    printf("The power of %d raised to its square root is: %.2f\n", a, power);
    // printf("Minimum value: %.2f\n", minn);
    // printf("Maximum value: %.2f\n", maxx);
    return 0;
}