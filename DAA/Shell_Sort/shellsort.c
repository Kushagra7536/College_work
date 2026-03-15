#include <stdio.h>

void ShellSort(int arr[], int n) {
    // Start with large gap, reduce by half each time
    for (int gap = n/2; gap > 0; gap /= 2) {
        // Insertion sort with current gap
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j= i;
            while(j>=gap && arr[j-gap]>temp){
                arr[j] = arr[j - gap];
                j-=gap;
            }
            arr[j] = temp;
        }
    }
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int n = 5;

    printf("Before: "); display(arr, n);
    ShellSort(arr, n);
    printf("After:  "); display(arr, n);
}