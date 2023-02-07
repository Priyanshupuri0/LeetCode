// Problem Link: https://leetcode.com/problems/maximum-subarray/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(arr)/sizeof(arr[0]);
        int maxSum = INT_MIN;
        int currSum = 0;
    for(int i = 0; i<size; i++)
    {
        currSum += arr[i];

        if(currSum > maxSum)
        maxSum = currSum;

        if(currSum < 0)
        currSum = 0;
    }
    cout<<maxSum<<endl;
}