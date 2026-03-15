#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x; // store value at x
    *x = *y;       // put value of y into x
    *y = temp;     // put old x value into y
}

void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
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
    BubbleSort(arr, 5);
    display(arr, 5);
}
