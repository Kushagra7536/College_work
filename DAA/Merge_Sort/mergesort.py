import math

def Merge(arr,p,q,r):
    n1=q-p+1 
    n2=r-q
    L=[0]*(n1+1)
    R=[0]*(n2+1)
    for i in range(n1): L[i]=arr[p+i]
    for j in range(n2): R[j]=arr[q+j+1]
    L[n1]=math.inf
    R[n2]=math.inf
    
    x=0
    y=0
    for k in range(p,r+1):
        if(L[x]<=R[y]):
            arr[k]=L[x]
            x+=1
        else:
            arr[k]=R[y]
            y+=1

def MergeSort(arr,p,r):
    if(p<r):
        q=(p+r)//2
        MergeSort(arr,p,q)
        MergeSort(arr,q+1,r)
        Merge(arr,p,q,r)


def display(arr,n):
    for i in range(n):
        print(arr[i],end=" ")
    print()


arr=[5,4,3,2,1]
MergeSort(arr,0,4)
display(arr,5)
