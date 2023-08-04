// Online C compiler to run C program online
#include <stdio.h>

void reversearray(int arr[],int n,int k)
{
    int i=0;
    int j=n-1;
    
    while(j>i)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    
    i=0;
    j=k-1;
    
    while(j>i)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    
    i=k;
    j=n-1;
    
    while(j>i)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for(i=0;i<n;i++)
    {
        printf("%5d",arr[i]);    
    }
    
}
int main() {
    
    int n,i,k;
    printf("\nEnter size of array:");
    scanf("%d",&n);
    int arr[n];
    
    printf("\nEnter %d elements in array:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter how many times you want to rotate array:");
    scanf("%d",&k);
    
    k=k%n;

    reversearray(arr,n,k);
    
    return 0;
}
