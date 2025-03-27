#include <stdio.h>

int main() {
    int arr[5];

    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0],max=arr[0];  

    for (int i = 1; i < 5; i++) {
        if (arr[i] < min) {
            min = arr[i];  
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }

    printf("Minimum element: %d\n", min);
printf("max: %d",max);
    return 0;
}
