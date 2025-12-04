#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int arr1[n1];
    printf("Enter %d elements for first array: ", n1);
    for (int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr2[n2];
    printf("Enter %d elements for second array: ", n2);
    for (int i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    int merged[n1 + n2];

    // Merge arrays
    for (int i = 0; i < n1; i++)
        merged[i] = arr1[i];

    for (int i = 0; i < n2; i++)
        merged[n1 + i] = arr2[i];

    int total = n1 + n2;

    // Sort merged array (Bubble Sort)
    for (int i = 0; i < total - 1; i++) {
        for (int j = 0; j < total - i - 1; j++) {
            if (merged[j] > merged[j + 1]) {
                int temp = merged[j];
                merged[j] = merged[j + 1];
                merged[j + 1] = temp;
            }
        }
    }

    printf("\nMerged and Sorted Array: ");
    for (int i = 0; i < total; i++)
        printf("%d ", merged[i]);

    return 0;
}
