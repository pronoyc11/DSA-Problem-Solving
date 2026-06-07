/*
Problem: Perfect Permutation
Platform: Codeforces
Difficulty: easy
Topic: Recursion
Link: https://codeforces.com/problemset/problem/233/A
Status: solved
*/

#include <bits/stdc++.h>
using namespace std;


///Kono songkhar index tai tar value hote hobe jkhn se nije ekta index. But sei value ta se nije hote parbe na.
///Ei sorto ta prottekta songkhar jonno soman hote hobe.


int main() {
int n;

cin>>n;

if(n%2!=0){
    cout<<-1<<endl;
}else{


for(int i=1;i<=n;i++){
  if(i%2!=0){
    cout<<i+1<<" ";
  }else{
    cout<<i-1<<" ";
  }
}
cout<<endl;
}

return 0;
}
