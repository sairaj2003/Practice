/*
	Johnny was absent in his english class when the vowel topic was taught by the teacher . His english teacher gave him 
	two strings and told him to find the length of the longest common subsequence which contains only vowels, as a 
	punishment for not attending english class yesterday .
	
	Help Jhonny by writing a code to find the length of the longest common subsequence 
	
	Input Specification:
	
	input1: First string given by his teacher
	input2: Second string given by his teacher.
	Output Specification:
	
	Return the length of the longest common subsequence which contains only vowels.
	Example 1:
	
	vowelpunish
	
	english
	
	Output : 2
	
	Example 2:
	
	prepinsta
	
	prepare
	
	Output : 2
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isvowel(char ch)
{
	ch = tolower(ch);
	return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
}

int max(int a,int b)
{
	return(a > b) ? a :b;
}

int lcsv(char *input1,char *input2)
{
	int i,j;
	int m=strlen(input1);
	int n=strlen(input2);
	int mat[m][n];     
	
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(i==0 || j==0)
			{
				mat[i][j]=0;
			}
			else if(input1[i-1]==input2[j-1] && isvowel(input1[i-1]) && isvowel(input2[j-1]))
			{
				mat[i][j]=mat[i-1][j-1]+1;
			}
			else
			{
				mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
			}
		}
	}
	return mat[m][n];
}
int main() 
{
	char input1[100];
	char input2[100];
	
	printf("\nEnter first string:");
	scanf("%s", input1);
	printf("\nEnter second string:");
	scanf("%s", input2);

	int result=lcsv(input1,input2);
	printf("\n%d",result);
	return 0;
}
