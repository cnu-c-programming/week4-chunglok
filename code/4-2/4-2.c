#include <stdio.h>

int sum(int arr[], int n){
    int total = 0;
    for(int i = 0; i < 6; i++){
        total += arr[i];
    }
    return total;
}
double average(int arr[], int n){
    int total = 0;
    for(int i = 0; i < 6; i++){
        total += arr[i];
    }
    return total / n;
}
int max(int arr[], int n){
    int m = 0;
    for(int i = 0; i < 6; i++){
        if(m < arr[i])
            m = arr[i];
    }
    return m;
}

int main() {
    int arr[] = {3, 7, 1, 9, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("sum: %d\n", sum(arr, n));
    printf("avg: %.2f\n", average(arr, n));
    printf("max: %d\n", max(arr, n));

    return 0;
}
