/*
Problem: TwoSum with two pointers
Platform: LeetCode
Difficulty: easy
Topic: Implementation
Link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
Status: Solved
*/

#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
            int i=0,j=numbers.size()-1;


    while(i<numbers.size())
    {
        int sum = numbers[i] + numbers[j];
        if(sum>target)
        {
            j--;
        }
        else if(sum<target)
        {
            i++;
        }
        else
        {
            return {i+1,j+1};
        }

        if(i==j){
            return {};
            break;
        }
    }
    return {};
    }
};