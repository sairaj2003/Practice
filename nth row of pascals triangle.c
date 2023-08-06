/*
 -- VARIATION 02 : PASCALS TRIANGLE
 -- PRINT nth ROW OF PASCALS TRIANGLE
 
 Given the row number n. Print the n-th row of Pascal’s triangle.

Our first observation regarding Pascal’s triangle should be that the n-th row of the triangle has exactly n elements. With this observation, we will proceed to solve this problem.
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
        printf("%5d", combination(target, i));
    }
}

int main()
{
    int target;
    printf("\nEnter targeted row:");
    scanf("%d", &target);

    printf("%dth row of Pascal's Triangle: ", target);
    nthRowOfPascalTriangle(target);
    printf("\n");
    return 0;
}
