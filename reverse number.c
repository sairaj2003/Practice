//reverse number:

#include <stdio.h>

int reverseNum(int n)
{
    if(n==0)
    {
        printf("0");
    }
    while(n > 0)
    {
        int digit=n % 10;
        n=n/10;
        printf("%d",digit);
    }
}

int main() {
    int n;
    printf("\nEnter any number:");
    scanf("%d",&n);
    
    reverseNum(n);
    return 0;
}
