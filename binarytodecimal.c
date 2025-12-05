#include <stdio.h>

void decToBin(int n) {
    if (n > 1)
        decToBin(n / 2);   // recursive step

    printf("%d", n % 2);   // print remainder
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Binary: ");
    decToBin(num);

    return 0;
}
