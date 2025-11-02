#include <stdio.h>

int main() {
    int arr[] = {10, 69, 23, 69, 45 ,99};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 99;
    int found = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            printf("First occurrence of %d is at index %d\n", target, i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("%d not found in the array.\n", target);

    return 0;
}