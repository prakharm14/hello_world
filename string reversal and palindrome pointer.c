#include <stdio.h>

int main() {
    char str[100];
    char *start, *end, temp;

    printf("Enter a string: ");
    scanf("%s", str);   // reads a single word (no spaces)

    start = str;                 // pointer to beginning
    end = str;                   // pointer to end

    // Move 'end' to the last character
    while (*end != '\0')
        end++;
    end--;                       // now points to last valid character

    // Swap characters using two pointers
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
