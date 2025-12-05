#include <stdio.h>

int main() {
    int i,n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    int left = 0;          // left star position
    int right = 2*n - 2;   // right star position

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= right; j++) {
            if (j == left || j == right)
                printf("*");
            else
                printf(" ");
        }
        left++;
        right--;
        printf("\n");
    }
    for (i=0;i<n;i++){printf("* ");}
    return 0;
}
