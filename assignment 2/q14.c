#include<stdio.h>
#include <math.h>
int is_prime(int n) {
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0) return 0;
    return 1;
}
int main() {
    int arr[] = {2, 3, 4, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    for(int i = 0; i < n; i++)
        if(is_prime(arr[i])) count++;
    printf("Number of primes: %d\n", count);
    return 0;
}