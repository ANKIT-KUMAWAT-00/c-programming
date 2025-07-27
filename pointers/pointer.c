#include<stdio.h>
int main(){
    int a = 10;
    int* ptr = &a; // Pointer to a
    
   
printf("Address of a: %p\n", ptr);
printf("Value of a: %d\n", *ptr); // Dereferencing pointer to get value of a
*ptr = 20; // Changing value of a using pointer
 printf("Value of a: %d\n", a); // Should print 20
    return 0;
} 