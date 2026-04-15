/*
Problem: Bit++
Platform: Codeforces
Difficulty: Easy
Topic: Implementation
Link: https://codeforces.com/problemset/problem/282/A
Status: Solved
*/
#include<bits/stdc++.h>

using namespace std;


int main(){

int k,n,w;

cin>> k>>n>>w;


int price = k*(w*(w+1)/2);

if(n >= price) cout<< 0 <<endl;
else cout<<(price - n)<<endl;

return 0;
}
