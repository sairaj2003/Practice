// Online C compiler to run C program online
#include <stdio.h>

int reversearray(int n,int arr[],int target1,int target2)
{
    int i=target1-1;;
    int j=target2-1;
    while(j>i)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    
    printf("\nArray in reverse oorder:");
    for(i=0;i<n;i++)
    {
        printf("%5d",arr[i]);
    }
}
int main() {
    
    int n,i;
    int target1,target2;
    printf("\nEnter size of array:");
    scanf("%d",&n);
    int arr[n];
    
    printf("\nEnter %d elements in array:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter position from where you want to reverse array:");
    scanf("%d",&target1);
    
    printf("\nEnter position upto where you want to reverse array:");
    scanf("%d",&target2);
    
    int result=reversearray(n,arr,target1,target2);
    return 0;
}
