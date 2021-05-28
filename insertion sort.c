#include <stdio.h>
#include <stdlib.h>
void insertionsort(int arr[],int size){
    int n=size;
    for(int i=1;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(arr[j]>arr[i]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                i=j;
            }
        }
    }
}
void printarray(int arr[],int size){
    for (int k=0;k<=size-1;k++){
        printf("%d ",arr[k]);
    }
}
int main(){
    int arr[]={10,80,30,90,40,50,70,67,89,45,67};
    insertionsort(arr,11);
    printarray(arr,11);
    return 0;

}
