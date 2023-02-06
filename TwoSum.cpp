// Problem Link: https://leetcode.com/problems/two-sum/
// This program is used to find the position of two numbers in vector already provided, which when sum up
// give the target value.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {2, 3 ,5 ,6, 9, 7};
    int target;

    cout<<"Enter the target value: ";
    cin>>target;

    unordered_map <int, int> umap;
    for(int i = 0; i<nums.size(); i++)
    {
        int num = nums[i];
        int complement = target - num;

        auto it = umap.find(complement);
        if(it != umap.end()) // number found
        {
            cout<<it->second<<" "<<i<<endl;
        }
        umap[num] = i;
    }
}