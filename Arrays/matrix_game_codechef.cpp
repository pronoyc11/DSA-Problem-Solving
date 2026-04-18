/*
Problem: Matrix Game
Platform: CodeChef
Difficulty: Hard
Topic: Implementation
Link: https://www.codechef.com/problems/SNCK01?tab=statement
Status: UnSolved
*/
#include<bits/stdc++.h>

using namespace std;

int main(){


long T;
cin>>T;

while(T--){
    int n,m;
    cin>>n>>m;
long M[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>M[i][j];
    }
}
if(m%2==0){
    cout<<"SECOND"<<endl;
}else{
    cout<<"FIRST"<<endl;
}
cout<<endl;
}
}
