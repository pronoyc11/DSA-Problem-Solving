/*
Problem: Climbing Stairs(needs practice)
Platform: LeetCode
Difficulty: easy
Topic: Recursion
Link: https://leetcode.com/problems/climbing-stairs/description/
Status: solved
*/
#include<bits/stdc++.h>

using namespace std;
///FIRST SOLUTION ONLY WITH ITERATION
class Solution {
public:
    int climbStairs(int n) {
     int prev = 2;
     int current = 3;

     for(int i=3;i<n;i++) {
           int temp = current ;
           current = prev +current;
            prev = temp;
     }
     if(n==1){
        return 1;
     }
     if(n==2){
       return prev;
     }else{
        return current;
     }
    }
};

///THIS IS THE SECOND SOLUTION, DONE WITH RECURSION.
class Solution {
public:
    int solve(int n, vector<int>& memo) {
        // Base cases
        if (n == 1) return 1;
        if (n == 2) return 2;

        // Check if already computed
        if (memo[n] != 0) return memo[n];

        // Compute and store result
        memo[n] = solve(n-1, memo) + solve(n-2, memo);
        return memo[n];
    }

    int climbStairs(int n) {
        vector<int> memo(n + 1, 0);  // Initialize memo with size n+1
        return solve(n, memo);
    }
};


