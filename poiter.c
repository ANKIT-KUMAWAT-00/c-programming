// pointer is varibale which store the address of another variable
#include <stdio.h>
int main(){
    int a = 10;
    // a pointer can point toward the same data type  
    int *ptr;
    ptr = &a;
    printf("address of a = %x\n",ptr);
    printf("address of a = %x\n",&a);
    printf("address of a = %p\n",*ptr);

}