/*
Problem: fibonacci
Platform: LeetCode
Difficulty: easy
Topic: Recursion
Link: https://leetcode.com/problems/fibonacci-number/
Status: solved
*/
#include <bits/stdc++.h>
using namespace std;


int fib(int n) {
     if(n==0){
        return 0;
     }if(n==1){
        return 1;
     }
     return fib(n-1) + fib(n-2);
    }
int main()
{
    // your code goes here

        int n;
cin>>n;

cout<<fib(n);


    return 0;
}
