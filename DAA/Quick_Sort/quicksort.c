#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x; // store value at x
    *x = *y;       // put value of y into x
    *y = temp;     // put old x value into y
}

int Partition(int arr[], int p, int r)
{
    int x = arr[r];
    int i = p - 1;

    for (int j = p; j < r; j++)
    {
        if (arr[j] <= x)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    
    swap(&arr[i + 1], &arr[r]);
    return i + 1;
}

void QuickSort(int arr[], int p, int r)
{
    if (p < r)
    {
        int q = Partition(arr, p, r);
        QuickSort(arr, p, q - 1);
        QuickSort(arr, q + 1, r);
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    QuickSort(arr, 0, 4);
    display(arr, 5);
}