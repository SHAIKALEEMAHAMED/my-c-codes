#include<stdio.h>
void partition(int arr[],int l,int h){
    int p=h;
    int i=0;
    for(int j=0;j<=h;j++){
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
    for(int k=0;k<=h;k++){
        printf("%d\n",arr[k]);
    }

}
int main(){
    int arr[]={10, 80, 30, 90, 40, 50, 70};
    partition(arr,0,6);
}
