/*
Stock Buy And Sell
Problem Statement: You are given an array of prices where prices[i] is the price of a given stock on an ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

Examples
Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and 
sell on day 5 (price = 6), profit = 6-1 = 5.

Note: That buying on day 2 and selling on day 1 
is not allowed because you must buy before 
you sell.

Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are 
done and the max profit = 0.

*/
#include <stdio.h>

int maxProfit(int n,int arr[])
{
    int max_profit=0;
    int curr_profit=0;
    int flag=0;
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            curr_profit=(arr[j] - arr[i]);
            if(curr_profit > max_profit)
            {
                max_profit=curr_profit;
            }
        }
    }
    return max_profit;
    flag=0;
}

int main() {
    int n;
    printf("\nHow many elements do you want in array:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter %d elements in array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int result=maxProfit(n,arr);
    if(result==0)
    {
        printf("\n0");
    }
    else
    {
        printf("\nMax Profit:%d",result);
    }
    return 0;
}
