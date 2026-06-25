/*
Problem: Three sum to closest
Platform: LeetCode
Difficulty: Mediunm
Topic: Math
Link: https://leetcode.com/problems/3sum-closest/submissions/2045764200/
Status: Solved
*/

#include <bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());

    int initialDifference = INT_MAX;
    int resum = target;
    for (int i = 0; i < nums.size() - 2; i++)
    {

        int j = i + 1;
        int k = nums.size() - 1;

        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];

            int difference = abs(target - sum);
            cout << "difference " << difference << endl;
            cout << "initialDefference " << initialDifference << endl;
            if (difference < initialDifference)
            {
                initialDifference = difference;
                resum = sum;
                cout << "difference " << difference << endl;
                cout << "difference loss " << resum << endl;
            }
            else if (difference == 0)
            {
                resum = sum;
                return resum;
            }
            ///----Comparision part
            if (sum < target)
            {
                j++;
            }
            else if (sum > target)
            {
                k--;
            }
            else
            {

                return sum;
            }
        }
    }

    return resum;
}

int main()
{

    vector<int> nums = {-1, 2, 1, -4};

    cout << threeSumClosest(nums, 1);

    cout << endl;

    for (int x : nums)
        cout << x << ' ';

    return 0;
}
