int main() {
    int arr[] = {1, 3, 20, 4, 1, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n; i++) {
        if((i == 0 || arr[i] >= arr[i-1]) && (i == n-1 || arr[i] >= arr[i+1])) {
            printf("Peak element: %d at index %d\n", arr[i], i);
            break;
        }
    }
    return 0;
}