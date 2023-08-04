//First Repeating Element
/*
 Given an array arr[] of size n, find the first repeating element. The element should occur more than once and the index of its first occurrence should be the smallest.

Note:- The position you return should be according to 1-based indexing. 

Example 1:

Input:
n = 7
arr[] = {1, 5, 3, 4, 3, 5, 6}
Output: 2    (1 based indexing)
*/

#include <stdio.h>

int firstOccurence(int n, int arr[]) 
{
    int i, j;

    for (i = 0; i < n; i++) 
    {
        for (j = i + 1; j < n; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                return i + 1;
            }
        }
    }
    return -1;
}

int main() {
    int n, i;
    printf("\nHow many elements do you want in the array:");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter %d elements in the array:", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int result = firstOccurence(n, arr);
    if (result == -1)
    
    {
        printf("\nAll elements appear only once");
    } 
    else 
    {
        printf("\nThe first repeating element's 1-based index is: %d\n", result);
    }

    return 0;
}
