#include<stdio.h>

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Max_Heapify(int arr[],int n, int i){
    int l = (2*i)+1;
    int r = (2*i)+2;
    int largest = i;
    if(l<=n && arr[l]>arr[i]) largest=l;
    else largest=i;
    if(r<=n && arr[r]<arr[i]) largest=r;
    else largest=i;

    if(largest!=i){
        swap(&arr[i],&arr[largest]);
        Max_Heapify(arr,n,i);
    }
}

