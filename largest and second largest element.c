#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int largest = arr[0];
    int second = -999999;   // very small number

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;        // shift previous largest
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];         // valid second largest
        }
    }

    if (second == -999999)
        printf("No second largest element\n");
    else
        printf("Second largest = %d\n", second);

    return 0;
}
//// OR

#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Bubble sort (ascending order)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Find second largest (handle duplicates)
    int largest = arr[n - 1];
    int second = -1;  // or any sentinel

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] != largest) {
            second = arr[i];
            break;
        }
    }

    if (second == -1)
        printf("\nNo second largest element (all elements equal)\n");
    else
        printf("\nSecond largest element = %d\n", second);




    return 0;
}




