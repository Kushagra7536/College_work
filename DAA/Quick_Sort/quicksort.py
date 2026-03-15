import math

def Partition(arr,p,r):
    x=arr[r]
    i=p-1
    for j in range(p,r):
        if(arr[j]<=x):
            i+=1
            arr[i],arr[j] = arr[j],arr[i]
    arr[i+1],arr[r]=arr[r],arr[i+1]
    return i+1

def QuickSort(arr,p,r):
    if(p<r):
        q=Partition(arr,p,r)
        QuickSort(arr,p,q-1)
        QuickSort(arr,q+1,r)

def display(arr,n):
    for i in range(n):
        print(arr[i],end=" ")
    print()


arr=[5,4,3,2,1]
QuickSort(arr,0,4)
display(arr,5)