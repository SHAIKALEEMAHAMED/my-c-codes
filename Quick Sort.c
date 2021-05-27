#include <stdio.h>
int partition(int arr[],int l,int h){
    int p=h;
    int i=l;
    for(int j=l;j<=h-1;j++){
        if(arr[j]<=arr[p]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
        }
    }
    int temp=arr[i];
    arr[i]=arr[p];
    arr[p]=temp;
    return i;
}
void quicksort(int arr[],int l,int h){
    if(l<h){
        int pi=partition(arr,l,h);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,h);
    }
}
void printArray(int arr[],int l,int h)
{
    int k;
    for (k=l; k<=h;k++){
        printf("%d ",arr[k]);
    }
}
int main(){
    int arr[]={10, 80, 30, 90, 40, 50, 70};
    quicksort(arr,0,6);
    printArray(arr,0,6);
}

