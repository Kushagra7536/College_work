#include<stdio.h>

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}


void Max_Heapify(int arr[], int n, int i) {
    int l = 2*i + 1;
    int r = 2*i + 2;
    int largest = i;

    if (l < n && arr[l] > arr[largest]) largest = l;  // < not <=
    if (r < n && arr[r] > arr[largest]) largest = r;  // < not <=

    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        Max_Heapify(arr, n, largest);  // largest not i
    }
}
void Build_Max_Heap(int arr[], int n) {
    for (int i = n/2 - 1; i >= 0; i--)  // n/2-1 not n/2
        Max_Heapify(arr, n, i);
}

void HeapSort(int arr[], int n) {
    // Step 1: build max heap
    Build_Max_Heap(arr, n);

    // Step 2: extract max one by one
    for (int i = n-1; i >= 1; i--) {
        swap(&arr[0], &arr[i]);   // move current max to end
        Max_Heapify(arr, i, 0);  // heapify reduced heap
    }
}


void display(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[8]={3,1,4,1,5,9,2,6};
    HeapSort(arr,8)
    ;
    display(arr,8 );
}