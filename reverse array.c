// Online C compiler to run C program online
#include <stdio.h>

int reversearray(int n,int arr[])
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
    
    printf("\nArray in reverse oorder:");
    for(i=0;i<n;i++)
    {
        printf("%5d",arr[i]);
    }
}
int main() {
    
    int n,i;
    printf("\nEnter size of array:");
    scanf("%d",&n);
    int arr[n];
    
    printf("\nEnter %d elements in array:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int result=reversearray(n,arr);
    return 0;
}
