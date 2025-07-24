#include <stdio.h>

int main() {
    int num, reversed = 0;
    int *ptr = &num;
    
    printf("Enter a number: ");
    scanf("%d", ptr);
    
    printf("Original number: %d\n", *ptr);
    
    // Handle negative numbers
    if (*ptr < 0) {
        *ptr = -(*ptr);
    }
    
    // Reverse using pointer
    while (*ptr > 0) {
        reversed = reversed * 10 + *ptr % 10;
        *ptr /= 10;
    }
    
    // Restore sign for negative numbers
    if (num < 0) {
        reversed = -reversed;
    }
    
    printf("Reversed number: %d\n", reversed);
    
    return 0;
}
