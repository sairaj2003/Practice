
/*
Given an integer array nums, find the 
subarray
 with the largest sum, and return its sum.

 

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
Example 2:

Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.
Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.
 


*/
#include <stdio.h>

int maxSubarray(int n,int arr[])
{
    int maxsum=0;
    int start=0;
    int end=0;
    
    for(int i=0;i<n;i++)
    {
        int currentsum=0;
        for(int j=i;j<n;j++)
        {
            currentsum=currentsum+arr[j];
            if(currentsum > maxsum)
            {
                maxsum=currentsum;
                start=i;
                end=j;
            }
        }
    }
    printf("\nMaximum subarray is:");
    for(int i=start;i<=end;i++)
    {
        printf("%5d",arr[i]);
    }
    printf("\nMax Sum is:%d",maxsum);
}
int main() {
    int n;
    printf("\nEHow many elements do you want in array:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter %d elements in array",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int result=maxSubarray(n,arr);
    return 0;
}
