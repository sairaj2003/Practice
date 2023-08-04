// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
#include<ctype.h>    //use to change type of characters 

int ispallindrome(char name[])
{
    int n=strlen(name);
    int i=0;
    int j=n-1;
    int flag=0;
    
    //lowercase of string
    for(i=0;i<n;i++)
    {
        name[i]=tolower(name[i]);         //tolower is only use for characters not for strings
    } 
    i=0;
    
    while(j>=i)
    {
        if(name[i] != name[j])
        {
            flag=0;
            break;
        }
        else if(name[i] == name[j])
        {
            flag=1;
            i++;
            j--;
        }
    }
    
    if(flag==0)
    {
        printf("\n%s is not pallindrome",name);
    }
    else
    {
        printf("\n%s is pallindrome",name);
    }
}

int main() {
    
    char name[20];
    printf("\nEnter string:");
    scanf("%s",name);
    
    ispallindrome(name);
    return 0;
}
