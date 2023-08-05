// Minimum and maximum element in array
#include <stdio.h>

int twoSum(int n,int arr[],int target,int *minelm,int *maxelm)
{
    int i=0;
    int j=n-1;
    
    while(i<j)
    {
        if((arr[i] + arr[j]) == target)
        {
            *minelm=arr[i];
            *maxelm=arr[j];
            return;
        }
        else if((arr[i] + arr[j]) < target)
        {
            i++;
        }
        else
        {
            j--;;
        }
    }
    *minelm=0;
    *maxelm=0;
}

int main() 
{
    int n,target;
    printf("\nHow many elements do you want in array:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter %d elements in array:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter target value:");
    scanf("%d",&target);
    int minelm,maxelm;
    int result=twoSum(n,arr,target,&minelm,&maxelm);
    if(minelm == 0 &&  maxelm == 0)
    {
        printf("\nNo such numbers found..");
    }
    else
    {
        printf("\n%d , %d",minelm,maxelm);
    }
    
    return 0;
}
