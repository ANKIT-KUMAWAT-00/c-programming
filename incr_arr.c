#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], i, pos, index, value;
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    scanf("%d%d", &pos, &value);
    index = pos - 1;
    
    // Logic for insertion
    for (i = n - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    arr[index] = value;
    
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
}