#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            printf("%d ",j); // Print stars for the reverse triangle
        }
        printf("\n"); // Print a new line after each row
    }
}