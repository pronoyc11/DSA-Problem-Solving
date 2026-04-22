/*
Problem: Soldier and Bananas
Platform: Codeforces
Difficulty: easy
Topic: loop
Link: https://codeforces.com/problemset/problem/546/A
Status: solved
*/
#include <bits/stdc++.h>
using namespace std;


int main()
{
    // your code goes here
    long long k,n,w;

    cin>>k>>n>>w;
    long long moneyNeeded = 0;
    for(long i=1;i<=w;i++){
          moneyNeeded += i*k;
    }

    if(moneyNeeded>n){
        cout<<(moneyNeeded-n)<<endl;
    }else{
        cout<<0<<endl;
    }


    return 0;
}
