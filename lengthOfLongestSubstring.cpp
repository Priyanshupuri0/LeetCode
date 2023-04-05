// Problem Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
#include<bits/stdc++.h>
using namespace std;

// Sliding Window Approach
int main() {
    string s = "abcabcbb";
    int n = s.length();
    int res = 0;
    vector<bool> visited(256);
    for(int i = 0; i<n; i++) {
        for(int j = i; j<n; j++) {
            if(visited[s[j]] == true)
                break;
            else
            res = max(res, j - i + 1);
            visited[s[j]] = true;
        }
        visited[s[i]] = false;
    }
    cout<<res;
}

// Brute Force Approach
/*
    string s = "abcabcbb";
    int res = 0;
    for(int i = 0; i<n; i++) {
        for(int j = i; j<n; j++) {
            if(checkRepeatition(s, i, j)) {
                res = max(res, j - i + 1);
            }
        }
    }
    bool checkRepeatition(string s, int start, int end) {
        vector<int> chars(256);                             // Returns true when no repeatition
        for(int i = start, i<=end; i++) {
            char ch = s[i];
            s[ch]++;
            if(s[ch] > 1)
                return false;                   
        }
        return true;
    }
*/