/*
Search in a sorted 2D matrix
Problem Statement: Given an m*n 2D matrix and an integer, write a program to find if the given integer exists in the matrix.

Given matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row
Example 1:

Input: matrix = 
[[1,3,5,7],
 [10,11,16,20],
 [23,30,34,60]], 

target = 3

Output: true

Explanation: As the given integer(target) exists in the given 2D matrix, the function has returned true.
Example 2:

Input: matrix = 
[[1,3,5,7],
 [10,11,16,20],
 [23,30,34,60]], 

target = 13

Output: false

Explanation: As the given integer(target) does not exist in the given 2D matrix, the function has returned false.
*/
#include <stdio.h>

int searchElement(int mat[10][10],int row,int col,int target)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(mat[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int mat[10][10];
    int row,col;
    int target;
    printf("\nEnter number of rows:");
    scanf("%d",&row);
    printf("\nEnter number of cols:");
    scanf("%d",&col);
    
    printf("\nEnter elements in %d X %d matrix:",row,col);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    printf("\n%d X %d matrix is:\n",row,col);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%5d",mat[i][j]);
        }
        printf("\n");
    }
    
    printf("\nEnter Element that want to search:");
    scanf("%d",&target);
    
    
    int result=searchElement(mat,row,col,target);
    if(result == 0)
    {
        printf("\nElement not found...");
    }
    else
    {
        printf("\nElement found...");
    }
    return 0;
}
