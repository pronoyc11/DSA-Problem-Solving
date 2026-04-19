/*
Problem: 231. Power of Two
Platform: CodeChef
Difficulty: easy
Topic: Recursion
Link: https://www.codechef.com/problems/FLOW006
Status: solved
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here

    long T;
    cin>>T;

    while(T--){
        long long N,sum=0;
        cin>>N;

        while(N>0){
            int lastDigit = N%10;
            sum+=lastDigit;
            N /= 10;
        }
        cout<<sum<<endl;
    }

    return 0;
}


