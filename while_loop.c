#include <stdio.h>

int main() {
    int num;
    // Input the number
    printf("Enter an integer: ");
    
    // Check if the input is valid
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1; // Exit with an error code
    }
    // Check if the number is even
    if (num % 2 == 0) {
        printf("%d is even.\t", num);
    } else {
        printf("%d is odd.\n", num);
    }
    
    return 0;
}