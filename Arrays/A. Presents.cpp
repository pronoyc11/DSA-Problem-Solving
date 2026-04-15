/*
Problem: Presents
Platform: Codeforces
Difficulty: Easy
Topic: Implementation
Link: https://codeforces.com/problemset/problem/136/A
Status: Solved
*/
#include<bits/stdc++.h>

using namespace std;

int main(){


int n;

cin>>n;

int arr[n];

for(int i=1;i<=n;i++){
    int num;
    cin>>num;
    arr[num] = i;
}

for(int i=1;i<=n;i++){
    cout<<arr[i]<< " ";
}
cout<<endl;
}
