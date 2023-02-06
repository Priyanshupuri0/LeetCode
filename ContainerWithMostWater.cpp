// Problem Link: https://leetcode.com/problems/container-with-most-water/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int max_water = 0, left = 0, right = height.size() - 1;

    while(left<right)
    {
        max_water = max(max_water, min(height[left], height[right]) * (right-left));

        if(height[left] > height[right])
            right--;
        else
            left++;
    }
    cout<<max_water<<endl;
}