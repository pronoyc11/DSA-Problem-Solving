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

void print(int n){

    if(n == 1){
        cout<<1<<' ';
    }else{
       print(n-1);
       cout<<n<<' ';
    }

}

int main()
{
    // your code goes here

        int n;
cin>>n;

print(n);



    return 0;
}
