/*
Problem: Nearly Lucky Number
Platform: Codeforces
Difficulty: Easy
Topic: Implementation
Link: https://codeforces.com/problemset/problem/110/A
Status: Solved
*/
#include<bits/stdc++.h>

using namespace std;

int main(){

long long n;

cin>>n;
long long lucky = 0;
while(n > 0){
    long long digit = n%10;
    if(digit == 4 || digit == 7){
        lucky++;
    }
    n /= 10;
}

if(lucky==4 || lucky == 7){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}
