
/*
Problem: Three Sum
Platform: LeetCode
Difficulty: Medium
Topic: Math
Link: https://leetcode.com/problems/3sum/submissions/2029860675/
Status: Solved
*/



#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> threeSum(vector<int>& nums)
{

    sort(nums.begin(),nums.end());
    vector<vector<int>> finalArray;
    for(int i=0; i<nums.size(); i++)
    {

        if( i>0 && nums[i] == nums[i-1])
        {
            continue;
        }
        int toCompare = -1 * nums[i];
        int j = i+1;
        int k = nums.size()-1;
        while(j<k)
        {
            if(nums[j]+nums[k] == toCompare)
            {
                finalArray.push_back({nums[i],nums[j],nums[k]});
                j++;
                k--;
                while(j<k && nums[j]==nums[j-1]) j++;
                while(j<k && nums[k]==nums[k+1]) k--;

            }
            else if(nums[j]+nums[k] > toCompare)
            {
                k--;
            }
            else
            {
                j++;
            }
        }
    }

    return finalArray;


//return {{2,1},{3,2}};
}



int main()
{

    vector<int> numbers = {-2,0,1,1,2};

    vector<vector<int>> arr = threeSum(numbers);

    for(vector<int> x:arr)
    {
        cout<<"[ ";
        for(int y:x)
        {
            cout<<y<<' ';
        }
        cout<<" ],";
        cout<<endl;

    }



}
