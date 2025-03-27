#include <stdio.h>
int main(){
    int n, i, search, found = 0;
    printf("Enter the number of array elements:\n");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search:\n");
    scanf("%d", &search);

    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            found = 1;
            printf("Element found at position %d\n",i + 1);
        }
    }

    if (found==0)
        
    
        printf("Not found\n");

    return 0;
}
