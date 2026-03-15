def ShellSort(arr):
    n = len(arr)
    gap = n // 2

    while gap > 0:
        for i in range(gap, n):
            temp = arr[i]
            j = i
            while j >= gap and arr[j - gap] > temp:
                arr[j] = arr[j - gap]
                j -= gap
            arr[j] = temp
        gap //= 2

def display(arr):
    print(*arr)

arr = [5, 4, 3, 2, 1]
print("Before:", *arr)
ShellSort(arr)
print("After: ", *arr)
