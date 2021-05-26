#include<stdio.h>
#include<string.h>

void heapify(int a[],int n,int i)
{
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    int temp;

    if(left<n && a[left]>a[largest])
    {
        largest = left;
    }

    if(right<n && a[right]>a[largest])
    {
        largest = right;
    }

    if(largest != i)
    {
        temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;

        heapify(a,n,largest);
    }
}

void heapsort(int a[],int n)
{
    int temp;
    for(int i=(n/2)-1;i>=0;i--)
    {
        heapify(a,n,i);
    }
    for(int i=n-1;i>=0;i--)
    {
        temp = a[i];
        a[i] = a[0];
        a[0] = temp;

        heapify(a,i,0);
    }
}

int main(void)
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    heapsort(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}