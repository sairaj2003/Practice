/*
Given an array of integers (both odd and even), the task is to arrange them in such a way that odd and even values come 
in alternate fashion in non-decreasing order(ascending) respectively. 

If the smallest value is Even then we have to print Even-Odd pattern.
If the smallest value is Odd then we have to print Odd-Even pattern.
Note: No. of odd elements must be equal to No. of even elements in the input array.

Examples: 

Input:  arr[] = {1, 3, 2, 5, 4, 7, 10} 

Output: 1, 2, 3, 4, 5, 10, 7 

Smallest value is 1(Odd) so output will be Odd-Even pattern.

Input: arr[] = {9, 8, 13, 2, 19, 14} 

Output: 2, 9, 8, 13, 14, 19 

Smallest value is 2(Even) so output will be Even-Odd pattern
*/

#include <stdio.h>
#include <stdlib.h>


int sorting(int n,int arr[])
{
	int temp,i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i] > arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}	
		}
	}
}

int modify_array(int n,int arr[])
{
	int i,j;
	sorting(n,arr);
	int oddarr[n/2];
	int evenarr[n/2],resultarr[n],resultIndex=0;
	int oddIndex=0,evenIndex=0;
	int smallest=arr[0];
	int isSmallestOdd=(smallest  % 2 != 0);
	
	for(i=0;i<n;i++)
	{
		if(arr[i]%2 !=0)
		{
			oddarr[oddIndex++]=arr[i];
		}
		else
		{
			evenarr[evenIndex++]=arr[i];
		}
	}
	
	if(isSmallestOdd)
	{
		for(i=0;i<=n/2;i++)
		{
			resultarr[resultIndex++]=oddarr[i];
			resultarr[resultIndex++]=evenarr[i];
		}
	}
	else
	{
		for(i=0;i<=n/2;i++)
		{
			resultarr[resultIndex++]=evenarr[i];
			resultarr[resultIndex++]=oddarr[i];
		}
	}
	
	
	printf("\nOutput:");
	for(i=0;i<n;i++)
	{
		printf("%5d",resultarr[i]);
	}
}
int main() 
{
	int n,i;
	printf("\nEnter how many elements do you want in array:");
	scanf("%d",&n);
	int arr[n];
	printf("\nEntr %d elemments in array:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	modify_array(n,arr);
	
	return 0;
}
