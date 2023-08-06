/*
 -- VARIATION 03 : PASCALS TRIANGLE
 -- PRINT FIRST n ROWS OF PASCALS TRIANGLE
 
 Given the row number n. Print the FIRST n rows of Pascal’s triangle.

*/

#include <stdio.h>

long long factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int combination(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

void nthRowOfPascalTriangle(int target)
{
    for (int i = 0; i <= target; i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%5d", combination(i,j));   
        }
        printf("\n");
    }
}

int main()
{
    int target;
    printf("\nEnter how many rows do you want:");
    scanf("%d", &target);

    printf("Fisrt %d row of Pascal's Triangle are:\n",target);
    nthRowOfPascalTriangle(target);
    return 0;
}
