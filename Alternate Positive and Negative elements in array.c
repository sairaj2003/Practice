/*
Alternate positive and negative numbers
Given an unsorted array Arr of N positive and negative numbers. Your task is to create an array of alternate positive and negative numbers without changing the relative order of positive and negative numbers.
Note: Array should start with a positive number and 0 (zero) should be considered a positive element.

Input: 
N = 9
Arr[] = {9, 4, -2, -1, 5, 0, -5, -3, 2}
Output:
9 -2 4 -1 5 -5 0 -3 2
Explanation : Positive elements : 9,4,5,0,2
Negative elements : -2,-1,-5,-3
As we need to maintain the relative order of
postive elements and negative elements we will pick
each element from the positive and negative and will
store them. If any of the positive and negative numbers
are completed. we will continue with the remaining signed
elements.The output is 9,-2,4,-1,5,-5,0,-3,2.
*/
#include <stdio.h>

int alternatePositiveNegative(int n,int arr[])
{
    int temp[n];
    int i;
    int positiveindex=0;
    int negativeindex=1;
    
    for(i=0;i<n;i++)
    {
        if(arr[i] >= 0)
        {
            temp[positiveindex]=arr[i];
            positiveindex+=2;
        }
    }
    
    for(i=0;i<n;i++)
    {
        if(arr[i] < 0)
        {
            temp[negativeindex]=arr[i];
            negativeindex+=2;
        }
    }
    
    printf("\nModified array:");
    for(i=0;i<n;i++)
    {
        printf("%5d",temp[i]);
    }
}
int main() {
    int n,i;
    printf("\nHow many elements do you want in array:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter %d elements in array:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    alternatePositiveNegative(n,arr);
    return 0;
}
