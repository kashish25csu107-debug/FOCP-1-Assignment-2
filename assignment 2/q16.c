#include<stdio.h>
int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int n = 5, elem = 99, pos = 2; // pos=0 (front), n (end), or middle
    printf("Before insertion: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    for(int i = n; i > pos; i--) arr[i] = arr[i-1];
    arr[pos] = elem;
    n++;
    printf("\nAfter insertion: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}