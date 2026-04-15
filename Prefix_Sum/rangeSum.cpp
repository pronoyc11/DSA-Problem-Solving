
/*
Problem: RangSumquery-immutable.
Platform: LeetCode
Difficulty: Easy
Topic: Prefix Sum
Link:https://leetcode.com/problems/range-sum-query-immutable/solutions/
Status: Solved
*/


#include <bits/stdc++.h>
using namespace std;
class NumArray
{
public:
    vector<long> prefixArr;
    NumArray(vector<int> &nums)
    {
        prefixArr.resize(nums.size() + 1);
        prefixArr[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            prefixArr[i] = prefixArr[i - 1] + nums[i];
        }
    }

    int sumRange(int left, int right)
    {
        if (left == 0)
        {
            return prefixArr[right];
        }
        else
        {
            return (prefixArr[right] - prefixArr[left - 1]);
        }
    }
};

void main()
{
}

