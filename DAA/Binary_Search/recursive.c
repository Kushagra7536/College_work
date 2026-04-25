#include<stdio.h>

int BinarySearch(int start, int end, int n, int arr[]){
   if(start>end) return -1;
   int pos = (start+end)/2;
   if(arr[pos]==n) return pos;
   else if(n>arr[pos]) return BinarySearch(pos+1,end,n,arr);
   else if(n<arr[pos]) return BinarySearch(start,pos-1,n,arr);
}

int main(){
   int arr[10]={1,2,3,4,5,6,7,8,9,10};
   int n; 
   printf("Enter element to search : ");
   scanf("%d",&n);

   int index = BinarySearch(0,9,n,arr);

   printf("Found at index: %d \n",index);
}