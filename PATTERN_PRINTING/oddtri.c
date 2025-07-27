#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++){
      int a=1;
        for(int j = 1; j<=i; j++){
        printf("%d ", a); // Print the current column number
          a+=2;
        }
        
        printf("\n"); // Print a new line after each row
    }
}
