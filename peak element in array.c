/*
  An element is called a peak element if its value is not smaller than the value of its adjacent elements(if they exists).
  Given an array arr[] of size N, Return the index of any one of its peak elements.
*/

#include <stdio.h>
#include <limits.h>

int main() 
{
    int n, i;
    printf("\nEnter how many elements do you want in the array:");
    scanf("%d", &n);
        
    int arr[n];
    printf("\nEnter %d elements in the array:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (arr[i] > arr[i + 1])
            {
                printf("\n%d", i);
            }
        }
        else if (i == n - 1)
        {
            if (arr[i] > arr[i - 1])
            {
                printf("\n%d", i);
            }
        }
        else
        {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            {
                printf("\n%d", i);
            }
        }
    }
    return 0;
}
