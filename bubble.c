// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
    
//     int arr[n], i, j, temp;
    
//     // Taking input
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
    
//     printf("\nBefore Sorting:\n");
//     for(i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     // Bubble Sort using only for loops
//     for(i = 0; i < n - 1; i++) { 
//         for(j = 0; j < n - 1; j++) { 
//             if(arr[j] > arr[j + 1]) { 
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     printf("\nAfter Sorting:\n");
//     for(i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }
#include <stdio.h>
int main(){
    int a=5,arr[a],i,j,temp;
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a-1;i++){
        for(j=0;j<a-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<a;i++){
        printf("%d ",arr[i]);
    }
}
