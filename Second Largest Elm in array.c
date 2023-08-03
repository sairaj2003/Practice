// Online C compiler to run C program online
#include <stdio.h>
#include <limits.h>
void swapping(int n,int arr[])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
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

int secondLargest(int n,int arr[])
{
    swapping(n,arr);
    printf("\nThe second largest element in array is %d",arr[n-2]);
}
int main() 
{
    int n,i,target;
    int count=0;
    printf("\nEnter how many elements do you want in array:");
    scanf("%d",&n);
        
    int arr[n];
    printf("\nEnter %d elements in array:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int result=secondLargest(n,arr);
    return 0;
}
