#include <stdio.h>

int sum(int arr[], int n){
    int s = 0;
    for(int i = 0; i < n; i++){
        s += arr[i];
    }
    printf("%d\n", s);
}
double average(int arr[], int n){
    int s = 0;
    for(int i = 0; i < n; i++){
        s += arr[i];
    }
    printf("%d\n", s/n);
}
int max(int arr[], int n){
    int m = 0;
    for(int i = 0; i < n; i++){
        if(m < arr[i])
            m = arr[i];
    }
    printf("%d\n", m);
}

int main() {
    int arr[] = {3, 7, 1, 9, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("sum: %d\n", sum(arr, n));
    printf("avg: %d\n", average(arr, n));
    printf("max: %d\n", max(arr, n));

    return 0;
}
