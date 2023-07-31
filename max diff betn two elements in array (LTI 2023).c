/*
	Given an array arr[] of integers, find out the maximum difference between any two elements such that the larger 
	element appears after the smaller number.

	Examples :
	Input : arr = {2, 3, 10, 6, 4, 8, 1}
	Output : 8
	Explanation : The maximum difference is between 10 and 2.
	
	Input : arr = {7, 9, 5, 6, 3, 2}
	Output : 2
	Explanation : The maximum difference is between 9 and 7.
*/

#include <stdio.h>
#include <stdlib.h>

int min(int a,int b)
{
	return (a > b) ? b :a;
}

int max_diff_array(int n,int arr[])
{
	int i,j;
	int max_diff=abs(arr[1]-arr[0]);
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[j]-arr[i] > max_diff)
			{
				max_diff=arr[j]-arr[i];	
			}
		}
	}
	return max_diff;
	
}
int main() 
{
	int n,i;
	printf("\nEnter how many elements do you want in array:");
	scanf("%d",&n);
	
	int arr[n];
	printf("\nEnter %d elements in array:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int result=max_diff_array(n,arr);
	printf("\nMax diff:%d",result);
	return 0;
}
