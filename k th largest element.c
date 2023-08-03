/*
  Given an array arr[] and an integer K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.

Note :-  l and r denotes the starting and ending index of the array.

Example 1:

Input:
N = 6
arr[] = 7 10 4 3 20 15
K = 3
Output : 7
Explanation :
3rd smallest element in the given 
array is 7.
*/

#include <stdio.h>
#include <limits.h>

int swapping(int arr[],int n)
{
    int i,j;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;    
            }
        }
    }
}

int kthlargestelm(int n,int arr[],int k)
{
    int i;
    swapping(arr,n);
    printf("%d",arr[k-1]);
}

int main() 
{
    int n, i,k;
    printf("\nEnter how many elements do you want in the array:");
    scanf("%d", &n);
        
    int arr[n];
    printf("\nEnter %d elements in the array:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter value of K:");
    scanf("%d",&k);
    
    int result= kthlargestelm(n,arr,k);
    return 0;
}
