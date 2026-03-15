def display(arr,n):
    for i in range(n):
        print(arr[i],end=" ")
    print()

def InsertionSort(arr,n):
    for i in range(n):
        key = arr[i]
        j=i-1
        while(j>=0 and arr[j]>key):
            arr[j+1]=arr[j]
            j-=1
        arr[j+1]=key

arr=[5,4,3,2,1]
InsertionSort(arr,5)
display(arr,5)