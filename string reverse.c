// Online C compiler to run C program online
#include <stdio.h>

int stringReverse(char name[])
{
    int n=strlen(name);
    int i=0;
    int j=n-1;
    
    while(j>i)
    {
        char temp=name[i];
        name[i]=name[j];
        name[j]=temp;
        i++;
        j--;
    }
    
    printf("String:%s",name);
}

int main() {
    
    char name[20];
    printf("\nEnter string:");
    scanf("%s",name);
    
    int result=stringReverse(name);
    return 0;
}
