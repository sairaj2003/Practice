/*
  Write a program to find the smallest integer value ‘b’ for the given value of
  ‘a’.
  If we multiply the digits of ‘b’, we should get the exact value of ‘a’.
  Result ‘b’ must contain more than one digit.
  Constraints:
  1<=a<=10000
  Examples:
  Input: 10
  Output: 25
  Explanation: 2*5=10. Hence 25 is the smallest value for 10.
  Input: 56
  Output: 78
  Explanation: 7*8=56
  Input: 150
  Output: 556
  Explanation: 5*5*6=150
  Input: 13
  Output: Not Possible
*/
// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int n,i,j=0,arr[1000];
    printf("\nEnter number:");
    scanf("%d",&n);
    
    if(n<10)
    {
        printf("\n%d",n+10);
    }
    else
    {
        for(i=9;i>1;i--)
        {
            while(n%i==0)
            {
                n=n/i;
                arr[j++]=i;
            }
        }
        
        if(n>10)
        {
            printf("\nNot possible");
        }
        else
        {
            printf("\nFactors are:");
            for(i=j-1;i>=0;i--)
            {
                printf("%d",arr[i]);
            }
        }
    }
    
    return 0;
}

