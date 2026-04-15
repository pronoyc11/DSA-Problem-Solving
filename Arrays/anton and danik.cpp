/*
Problem: Anton and Danik
Platform: Codeforces
Difficulty: Easy
Topic: Implementation
Link: https://codeforces.com/problemset/problem/734/A
Status: Solved
*/
#include<bits/stdc++.h>

using namespace std;

int main(){

long long n;

cin>>n;

long i=0;
long long danik = 0;
long long anton = 0;
char name[n];

for(;i<n;i++){
cin>>name[i];

if(name[i] == 'A'){
    anton++;
}else{
    danik++;
}
}

if(anton>danik) cout<<"Anton"<<endl;
else if(anton == danik) cout<<"Friendship"<<endl;
else cout<<"Danik"<<endl;

}
