/*
Problem: Sum of All Odd Length Subarrays(Needs revise for the alternative solution-O(n))
Platform: LeetCode
Difficulty: easy
Topic: loop
Link: https://leetcode.com/problems/sum-of-all-odd-length-subarrays/
Status: solved
*/
#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr = {1,4,2,5,3};


        int actualSum=0;
    for(int i=1;i<=arr.size();i++){
        int k= i-1;
        int sumOnly = 0;
        for(int j=1;j<=arr.size()-i+1;j++){
            sumOnly += arr[j+k-1] ;
            if(j%2!=0){
                actualSum+=sumOnly;
            }
        }
        cout<<endl;
    }

    cout<<actualSum<<endl;



    return 0;
}
