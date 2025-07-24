#include <stdio.h>

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = nums;
    
    printf("Multiplication tables using pointers:\n");
    
    // Print multiplication tables from 1 to 10
    for(int i = 0; i < 10; i++) {
        printf("\nTable of %d:\n", *ptr);
        for(int j = 1; j <= 10; j++) {
            printf("%d * %d = %d\n", *ptr, j, (*ptr) * j);
        }
        ptr++; // Move pointer to next number
    }
    
    return 0;
}
