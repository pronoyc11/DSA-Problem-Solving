
/*
Problem: Vanya and Fence
Platform: Codeforces
Difficulty: Easy
Topic: Implementation
Link: https://codeforces.com/problemset/problem/677/A
Status: Solved
*/
#include<bits/stdc++.h>

using namespace std;

int main(){


long n,h;

cin>>n>>h;

long long minWidth = 0;
for(long i=0;i<n;i++){
    long ai;

    cin>>ai;

    if(ai>h){
        minWidth +=2;
    }else{
        minWidth++;
    }
}

cout<<minWidth<<endl;




return 0 ;
}
