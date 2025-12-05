#include <stdio.h>

int main() {
    int n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value of k: ");
    scanf("%d", &k);

    // Reduce k if it's larger than n
    k = k % n;

    // Rotate left by k positions
    while (k--) {
        int first = arr[0];
        for (int i = 0; i < n - 1; i++)
            arr[i] = arr[i + 1];
        arr[n - 1] = first;
    }

    printf("\nArray after left rotation: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
