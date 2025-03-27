int main() {
    int n;
    scanf("%d", &n);
    int arr[n], i, pos, index;
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    scanf("%d", &pos);
    index = pos - 1;
    
    // Logic for insertion
    for (i = index; i < n; i++) {
        arr[i] = arr[i+1];
    }
   
    
    for (i = 0; i <n; i++) {
        printf("%d ", arr[i]);
    }
}