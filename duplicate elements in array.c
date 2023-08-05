/*
Given an array a[] of size N which contains elements from 0 to N-1, you need to find all the elements occurring more than once in the given array. Return the answer in ascending order.

Note: The extra space is only for the array to be returned.
Try and perform all operations within the provided array. 

Example 1:

Input:
N = 4
a[] = {0,3,1,2}
Output: -1
Explanation: There is no repeating element in the array.Therefore output is -1.
*/

#include <stdio.h>
#include <string.h>

int duplicateElm(int n,int arr[])
{
    int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                printf("\nDuplicate Elements:%d",arr[i]);
                flag=1;
            }
        }
    }
    return flag;
}
int main() {
    int n;
    printf("\nHow many element do you want in array:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter %d elements in array:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int result=duplicateElm(n,arr);
    if(result==0)
    {
        printf("\nNo duplicate elements..");
    }
    return 0;
}
