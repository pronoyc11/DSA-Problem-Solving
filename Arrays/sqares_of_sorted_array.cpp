
/*
Problem: Squares of sorted array
Platform: LeetCode
Difficulty: Easy
Topic: Math
Link: https://leetcode.com/problems/squares-of-a-sorted-array/description/
Status: Solved
*/



#include <bits/stdc++.h>
using namespace std;


 vector<int> sortedSquares(vector<int>& nums) {

        for(int i=0;i<nums.size();i++){
            nums[i] = nums[i]*nums[i];
        }

        int i =0,j = nums.size()-1;
        vector<int> finalResultArray;
        while(i<=j){
            if(nums[i]>=nums[j]){
                finalResultArray.push_back(nums[i]);
                i++;
            }else{
                finalResultArray.push_back(nums[j]);
                j--;
            }
        }

       reverse(finalResultArray.begin(),finalResultArray.end());

       return finalResultArray;
    }


int main()
{

    vector<int> numbers = {-4,-1,0,3,10};

    sortedSquares(numbers);

    for(int x:numbers) cout<<x<<' ';



}
