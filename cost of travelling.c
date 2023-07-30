
/*
For hiring a car, a travel agency charges R1 rupees per hour for the first N hours and then R2 rupees
per hour.
Given the total time of travel in minutes in X.
The task is to find the total travelling cost in rupees.
Note : While converting minutes into hours, ceiling value should be considered as the total number of
hours.
For example : If the total travelling time is 90 minutes, i.e. 1.5 hours, it must be considered as
hours.

Example : Test Case:
Input : Input :
20 -- r1 
4 -- n
40 -- r2 
300 – x 
Output :
120
Explanation :
Total travelling hours = 300 / 60 = 5 hours
Rupees 20 / hours for first 4 hours = 20 * 4 = 80 rupees
Rupees 40 / hours in 5th hour = 40 * 1 = 40 rupees
Hence, the total travelling cost = 80 + 40 = 120 rupees
*/


#include <stdio.h>
#include <math.h>

int main() {
    int r1,n,r2,x;
    printf("\nEnter values for r1,n,r2,x:");
    scanf("\n%d%d%d%d",&r1,&n,&r2,&x);
    
    int total=0;
    int hours=ceil(x*1.0/60);
    
    if(n>hours)
    {
        total=total+(r1*n);
    }
    else
    {
        total=total+(r1*n);
        hours=hours-n;
        total=total+(hours*r2);
    }
    printf("\nTotal cost:%d",total);
    return 0;
}
