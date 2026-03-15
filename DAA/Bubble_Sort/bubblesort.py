def display(arr,n):
    for i in range(n):
        print(arr[i],end=" ")
    print()

def BubbleSort(arr,n):
    for i in range(n):
        for j in range (n-i-1):
            if(arr[j]>arr[j+1]):
                arr[j],arr[j+1] = arr[j+1],arr[j]

arr=[5,4,3,2,1]
BubbleSort(arr,5)
display(arr,5)

