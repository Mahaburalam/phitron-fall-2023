#include <stdio.h>

int main() {
    int N;
    printf("Enter the size of the array (N): ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Array size should be a positive integer.\n");
        return 1;
    }

    int A[N];  // Declare an array of size N

    // Read the elements of the array
    printf("Enter %d elements for the array:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Print values at odd indexes in reverse order
    printf("Values at odd indexes in reverse order:\n");
    for (int i = N - 1; i >= 0; i -= 2) {
        printf("%d\n", A[i]);
    }

    return 0;
}

