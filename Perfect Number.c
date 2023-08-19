//Perfect Number
/*
a perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself.

For example, 6 is a positive number that is completely divisible by 1, 2, and 3. We know that the number is also divisible by itself but we will include it in the addition of divisors. When we add these divisors (1 + 2 + 3 = 6), it produces 6, which is equal to the number that we have considered. So, we can say that 6 is a perfect number.
*/

#include <stdio.h>

void perfectNumber(int n)
{
    int sum=0;
    for(int i=1;i<=n/2;i++)
    {
        int rem=n%i;
        if(rem==0)
        {
            sum=sum+i;
        }
    }
    
    if(sum==n)
    {
        printf("\n%d is perfect number..",n);
    }
    else
    {
        printf("\n%d is not perfect number...",n);
    }
}

int main() {
    int n;
    printf("\nEnter any positive integer:");
    scanf("%d",&n);
    
    perfectNumber(n);
    return 0;
}
