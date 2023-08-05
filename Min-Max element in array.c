// Minimum and maximum element in array
#include <stdio.h>

void sorting(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] > arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int minMaxElm(int n,int arr[])
{
    sorting(n,arr);
    printf("\nMinimum Element:%d",arr[0]);
    printf("\nMaximum Element:%d",arr[n-1]);
}

int main() 
{
    int n;
    printf("\nHow many elements do you want in array:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter %d elements in array:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    minMaxElm(n,arr);
    return 0;
}
