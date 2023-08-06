/*
Rotate Image by 90 degree
Problem Statement: Given a matrix, your task is to rotate the matrix 90 degrees clockwise.

Note: Rotate matrix 90 degrees anticlockwise

Examples
Example 1:

Input: [[1,2,3],[4,5,6],[7,8,9]]

Output: [[7,4,1],[8,5,2],[9,6,3]]

Explanation: Rotate the matrix simply by 90 degree clockwise and return the matrix.

Example 2:

Input: [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]

Output:[[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]

Explanation: Rotate the matrix simply by 90 degree clockwise and return the matrix
*/
#include <stdio.h>

void matrixTranspose(int n, int arr[n][n]) 
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = i+1; j < n; j++) 
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
}

void rowReverse(int n, int arr[n][n]) 
{
    for (int i = 0; i < n; i++) 
    {
        int left = 0;
        int right = n - 1;
        while (left < right) 
        {
            int temp = arr[i][left];
            arr[i][left] = arr[i][right];
            arr[i][right] = temp;
            left++;
            right--;
        }
    }
}

void matrixRotation(int n, int arr[n][n]) 
{
    
    matrixTranspose(n, arr);
    rowReverse(n, arr);
}

void printMatrix(int n, int arr[n][n]) 
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
}

int main() 
{
    int n;
    printf("\nEnter size of square Matrix:");
    scanf("%d", &n);
    int arr[n][n];
    printf("\nEnter %d elements in array: ", n * n);
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }

    matrixRotation(n, arr);
    printf("\nMatrix after 90 degrees clockwise rotation:\n");
    printMatrix(n, arr);
    return 0;
}
