#include<stdio.h>
#include<math.h>

void Merge(int arr[], int p, int q, int r){
    int n1=q-p+1;
    int n2=r-q;
    int L[n1+1]; int R[n2+1];
    for(int i=0; i<n1; i++) L[i]=arr[p+i];
    for(int j=0; j<n2; j++) R[j]=arr[q+j+1];
    L[n1]=__INT_MAX__; R[n2]=__INT_MAX__;
    int i=0, j=0;
    for(int k=p; k<=r; k++){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
    }
}
void MergeSort(int arr[],int p, int r){
    if(p<r){
        int q = ceil((p+r)/2);
        MergeSort(arr,p,q);
        MergeSort(arr,q+1,r);
        Merge(arr,p,q,r);
    }
}



void display(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[5]={5,4,3,2,1};
    MergeSort(arr,0,4);
    display(arr,5);
}