#include <stdio.h>
int main(){
    short int a;
    a=100;
    printf("a=%d",a);
    printf("%d",sizeof(a));
    printf("%d",sizeof(a)); //sizeof says the size of how myuch a datra tupe it takes
    
    printf("\nint %d",sizeof(int));
    printf("\n float %d",sizeof(float));
    printf("\n char %d",sizeof(char));
    printf("\n double %d",sizeof(double));
    
    int asd=105;
    printf("\n%d",--asd);
return 0;
}