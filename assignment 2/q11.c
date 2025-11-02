#include <stdio.h>

int main() {
    int scores[] = {12, 7, 9, 20, 33, 44, 5, 6};
    int n = sizeof(scores) / sizeof(scores[0]);
    int even_array[n], odd_array[n];  // Arrays to hold even and odd numbers
    int even_count = 0, odd_count = 0;

    // Traverse the array and separate even and odd numbers
    for (int i = 0; i < n; i++) {
        if (scores[i] % 2 == 0) {
            even_array[even_count++] = scores[i];
        } else {
            odd_array[odd_count++] = scores[i];
        }
    }

    // Print even numbers
    printf("Even numbers (%d): ", even_count);
    for (int i = 0; i < even_count; i++) {
        printf("%d ", even_array[i]);
    }
    printf(" ");

    // Print odd numbers
    printf("Odd numbers (%d): ", odd_count);
    for (int i = 0; i < odd_count; i++) {
        printf("%d ", odd_array[i]);
    }
    printf(" ");

    return 0;
}