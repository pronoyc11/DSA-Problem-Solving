/*
Problem: Wrong Subtraction
Platform: Codeforces
Difficulty: Easy
Topic: Implementation
Link: https://codeforces.com/problemset/problem/977/A
Status: Solved
*/




#include<bits/stdc++.h>

using namespace std;


int main(){

int n,k;

cin>>n>>k;

for(int i=0;i<k;i++){

    int lastDigit = n%10;
    if(lastDigit == 0){
        n = n/10;
    }else{
        n = n - 1;
    }
}

cout<<n<<endl;

return 0;
}
