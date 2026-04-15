/*
Problem: Is your horseshoe on the other hoof
Platform: Codeforces
Difficulty: Easy
Topic: Implementation, Set
Link: https://codeforces.com/problemset/problem/228/A
Status: Solved
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

    set<long long> uniq;

    for(int i=0;i<4;i++){
        long long x;
        cin>>x;
        uniq.insert(x);
    }


    cout<<(4-uniq.size())<<endl;


    return 0;
}
