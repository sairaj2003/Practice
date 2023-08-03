// Online C compiler to run C program online
#include <stdio.h>
#include <limits.h>

int main() 
{
    int n,i,j;
    printf("\nEnter how many elements do you want in array:");
    scanf("%d",&n);
        
    int arr1[n];
    int arr2[n];
    printf("\nEnter %d elements in array:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    
    for(i=0;i<n;i++)
    {
        arr2[i]=arr1[n-1-i];
    }
    
    printf("\nArray in reverse order is :");
    for(i=0;i<n;i++)
    {
        printf("%5d",arr2[i]);
    }
    return 0;
}
