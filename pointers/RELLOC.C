#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int n,i; // n is no of elements , i is for loop
    scanf("%d",&n);
    //ptr=(int *)malloc(n*sizeof(int));
    ptr=(int *)calloc(n,sizeof(int));
    if(ptr==NULL){
        printf("updated memory is not allocated\n");
        return 1;
    }
    else{
        printf("updated memory is allocated to array\n");
        for(i=0;i<n;i++){
            scanf("%d",ptr+i);
        }
        for(i=0;i<n;i++){
            printf("%d ", *(ptr+i));
        }
        printf("\n");
    }
    free(ptr);
    return 0;
}
