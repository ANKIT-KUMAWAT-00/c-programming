#include <stdio.h>

int main() {
    int a[] = {29, 10, 14, 37, 14};
    int n = sizeof a / sizeof a[0];
    for (int i = 0; i < n - 1; ++i) {
        int min = i;
        for (int j = i + 1; j < n; ++j)
            if (a[j] < a[min]) min = j;
        if (min != i) {
            int t = a[i];
            a[i] = a[min];
            a[min] = t;
        }
    }
    for (int i = 0; i < n; ++i) printf("%d ", a[i]);
    return 0;
}
