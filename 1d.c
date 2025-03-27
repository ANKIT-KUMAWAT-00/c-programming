#include <stdio.h>
int main(){
    float a[11]={};
    // int arr[11]={1,2,3,4,5,6,7,8,9};
    // printf("%d",arr[10]);            if we dont give the value that much we have assigned it will directly take zero;;
    for (int i=1;i<=10;i++){
        if(i==6)
        continue;
        printf("address of arr a[%d] is %x\n",i,&a[i]);
    }
    for (int j = 0; j<=10;j++){
        printf("%d ",a[j]);
    }
    printf("\nsize of all elements is %d",sizeof(a));
    printf("\nsize of the string %d",sizeof(a)/sizeof(int));
    
}