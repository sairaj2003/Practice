/*
A traveler wants to start his journey from Pune to Ahmedabad. Before starting
the journey he/she uses GPS system to find all the paths to reach from source
to destination. He/she will use smallest or second smallest path to start the
journey. Write a logic to find the smallest and the second smallest distance
from the list of all distances.
Input:
1. The first input contains N, total number of paths from source to
destination.
2. The second input contains N sorted integers separated by newline
A1,A2,….An; representing the distance of all paths.
Output:
Output contains two numbers separated by single space character.
If all paths are equal, then the system should generate a message as “Equal”.
If N is less than 2, then the system should generate a message as “Invalid
input”.
Constraints:
2 < N <= 10
1 <= A[I] <= 1000
*/

#include <stdio.h>

int main() 
{
    int n;
    int i, j, temp;
    
    printf("Enter the number of paths from Pune to Ahmedabad (2 < N <= 10): ");
    scanf("%d", &n);
    int arr[n];
    
    if (n <= 2 || n > 10)
    {
        printf("Invalid input. Please enter a value between 3 and 10.\n");
    }
    else
    {
        printf("Enter the distance for each path (1 <= distance <= 1000):\n");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if (arr[i] < 1 || arr[i] > 1000)
            {
                printf("Invalid input. Distance should be between 1 and 1000.\n");
                return 1;
            }
        }
        
        printf("\n| No | Dist |");
        for (i = 0; i < n; i++)
        {
            printf("\n| %2d | %4d |", i, arr[i]);    
        }
        
        // Check if all paths are equal
        int allEqual = 1;
        for (i = 1; i < n; i++)
        {
            if (arr[i] != arr[0])
            {
                allEqual = 0;
                break;
            }
        }
        
        if (allEqual)
        {
            printf("\n\nAll paths are equal. Shortest path: %d\n", arr[0]);
        }
        else
        {
            for (i = 0; i < n; i++)
            {
                for (j = i + 1; j < n; j++)
                {
                    if (arr[i] > arr[j])
                    {
                        temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }
        
            printf("\n\nShortest path: %d", arr[0]);
            printf("\nSecond Shortest path: %d\n", arr[1]);
        }
    }
    
    return 0;
}
