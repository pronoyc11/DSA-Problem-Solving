
/*
Problem: Matrix Diagonal Sum
Platform: LeetCode
Difficulty: Easy
Topic: Implementation
Link: https://leetcode.com/problems/matrix-diagonal-sum
Status: Solved
*/


#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = n;
        int tsum = 0; 
        //find first diagonal sum
        for(int i=0;i<n;i++){
           tsum += mat[i][i];
        }
        //find second diagonal sum
        for(int i=0;i<n;i++){
                    tsum += mat[i][n-i-1];
        }
    
        if(n%2 != 0){
            tsum = tsum - mat[(n-1)/2][(m-1)/2];
        }

        return tsum;

        
    }
};