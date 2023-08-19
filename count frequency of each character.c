/*
COUNT FREQUENCY FOR EACH CHARACTER
*/
#include <stdio.h>

void frequencyCount(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        int count = 1;
        int alreadyProcessed = 0; 

        for (int j = 0; j < i; j++)
        {
            if (str[i] == str[j])
            {
                alreadyProcessed = 1; 
                break;
            }
        }

        if (alreadyProcessed)
        {
            continue; // Skip counting and printing
        }

        for (int j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        printf("\nCount of %c is %d", str[i], count);
    }
}

int main()
{
    char str[100];
    printf("\nEnter string 1:");
    scanf("%s", str);

    frequencyCount(str);
    return 0;
}
