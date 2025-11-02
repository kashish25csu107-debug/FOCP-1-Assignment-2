#include<stdio.h>
int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int n = 5, pos = 2; // pos=0 (front), n-1 (end), or middle
    printf("Before deletion: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    for(int i = pos; i < n-1; i++) arr[i] = arr[i+1];
    n--;
    printf("\nAfter deletion: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}