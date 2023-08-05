/*
Given an n-digit large number in form of string, check whether it is divisible by 7 or not. Print 1 if divisible by 7, otherwise 0.


Example 1:

Input: num = "8955795758"
Output: 1
Explanation: 8955795758 is divisible
by 7.
*/

#include <stdio.h>
#include <string.h>

int divisibleBy7(char number[]) 
{
    int num = 0;
    int len = strlen(number);

    for (int i = 0; i < len; i++) 
    {
        num = num * 10 + (number[i] - '0');
    }
    
    if(num % 7 == 0)
    {
        printf("\n%d is divisible by 7",num);
    }
    else
    {
        printf("\n%d is not divisible by 7",num);   
    }
}

int main() {
    char number[100];
    printf("Enter number string: ");
    scanf("%s", number);

    int result = divisibleBy7(number);
   

    return 0;
}
