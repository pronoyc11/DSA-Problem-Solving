/*
Problem: 231. Power of Two
Platform: LeetCode
Difficulty: medium
Topic: Recursion
Link: https://leetcode.com/problems/power-of-two/description/
Status: solved
*/
#include <bits/stdc++.h>
using namespace std;

bool isPower(long long n){
    if(n==1){

        return true;
    }else{
        if(n%2==0){
        return isPower(n/2);
        }else{
            return false;
        }
    }
}

int main()
{
    // your code goes here

    long long n;

    cin>>n;

    if(n==0){
     cout<<false<<endl;
    }else{
     cout<<isPower(n)<<endl;
    }

    return 0;
}

/*Alternative solution

class Solution {
public:
    bool isPowerOfTwo(int n) {
        // A number is power of two if:
        // 1. It's positive (n > 0)
        // 2. Only one bit is set in binary representation
        //    n & (n - 1) removes the rightmost set bit
        //    If result is 0, only one bit was set
        return n > 0 && (n & (n - 1)) == 0;
    }
};
*/
