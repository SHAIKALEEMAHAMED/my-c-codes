#include <stdio.h>
#include <stdlib.h>
void merge(int arr[],int lo,int m,int h){
    int n1=m-lo+1;
    int n2=h-m;
    int l[n1],r[n2];
    for (int i=0;i<n1;i++){
        l[i]=arr[lo+i];
    }
    for(int j=0;j<n2;j++){
        r[j]=arr[m+1+j];
    }
    int i=0,j=0;
    int k=lo;
    while(i<n1 && j<n2){
        if(l[i]<=r[j]){
            arr[k]=l[i];
            i++;
        }
        else{
            arr[k]=r[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=l[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=r[j];
        j++;
        k++;
    }
}
void mergesort(int arr[],int lo,int h){
    if(lo<h){
        int mid=(lo+h)/2;
        mergesort(arr,lo,mid);
        mergesort(arr,mid+1,h);
        merge(arr,lo,mid,h);
    }
}
int main(){
        int arr[]={15,54,12,20,14,10,98};
        mergesort(arr,0,6);
        for(int i=0;i<6;i++){
            printf("%d  ",arr[i]);
        }
}

