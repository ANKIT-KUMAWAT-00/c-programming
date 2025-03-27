#include <stdio.h>
void australia(){
    printf("Australia\n");
    return;
}
void usa(){
    printf("USA\n");
    australia();
    printf("yeah i know you will come first\n");
    return;
}
void india(){
    printf("India\n");
    usa();
    printf("this is my mcdonald\n");
    return;
}
int main(){
   india();
   printf("this is my country\n");
    return 0;
   
    }