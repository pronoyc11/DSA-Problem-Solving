/*
Problem: Drinks
Platform: Codeforces
Difficulty: easy
Topic: loop
Link: https://codeforces.com/problemset/problem/200/B
Status: solved
*/
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin>>n;
  double percSum = 0;

  for(int i=0;i<n;i++){
    double num;
  cin>>num;
    percSum += num;
  }
  double juicePerc = percSum /100;
  double result = juicePerc/n;
  cout<<fixed<<setprecision(12)<<(result*100)<<endl;

    return 0;
}
