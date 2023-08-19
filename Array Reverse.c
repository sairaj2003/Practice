// Online C compiler to run C program online
#include <stdio.h>
#include <limits.h>

int main() 
{
    int n,i;
    printf("\nEnter how many elements do you want in array:");
    scanf("%d",&n);
        
    int arr[n];
    printf("\nEnter %d elements in array:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("\nArray in reverse order is :");
    for(i=n-1;i>=0;i--)
    {
        printf("%5d",arr[i]);
    }
    return 0;
}
