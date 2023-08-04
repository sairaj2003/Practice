// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int n,i,j;
    int count=0;
    printf("\nEnter size of array:");
    scanf("%d",&n);
    int arr[n];
    
    printf("\nEnter %d elements in array:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
    }
    
    printf("\nTotal number of Duplicate Elements:%d",count);
    return 0;
}
