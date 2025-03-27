#include<stdio.h>
int main() {
    int a, b, c, d, i, j;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int arr1[a][b];
    int arr2[c][d], res[c][d];
    
    // Input for first matrix
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }
    
    // Input for second matrix
    for (i = 0; i < c; i++) {
        for (j = 0; j < d; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }
    
    // Adding matrices
    printf("Resultant Matrix:\n");
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            res[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    // Transpose of the resultant matrix
    printf("Transposed Matrix:\n");
    for (i = 0; i < b; i++) {
        for (j = 0; j < a; j++) { // row and columns are exchanged.
            printf("%d ", res[j][i]);
        }
        printf("\n");
    }

    return 0;
}
