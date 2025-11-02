#include<stdio.h>

int main() {
    int arr[] = {2, 10, 10, 100, 2, 10, 11, 2, 11, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int frequency[1000] = {0};  // Assuming elements are < 1000 for simplicity
    int hasDuplicate = 0;

    // Count frequency of each element
    for (int i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }

    // Print duplicates if any
    printf("Output: ");
    for (int i = 0; i < 1000; i++) {
        if (frequency[i] > 1) {
            printf("%d ", i);
            hasDuplicate = 1;
        }
    }

    if (!hasDuplicate) {
        printf("-1");
    }

    printf(" ");
    return 0;
}