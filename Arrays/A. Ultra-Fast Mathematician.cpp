/*
Problem: Ultra-Fast Mathematician
Platform: Codeforces
Difficulty: Easy
Topic: Bit Manipulation
Link: https://codeforces.com/problemset/problem/61/A
Status: Solved
*/
#include<iostream>

using namespace std;


int main()
{

   string a,b;
   char ch[100];

   cin>>a;
   cin>>b;

   int l = a.length();


   int i = 0;

   while(i<l){
    if(a[i] != b[i]){
        ch[i++] = '1';
    }else{
        ch[i++] = '0';
    }
   }

   i = 0;
   while(i<l) cout<<ch[i++];

   cout<<endl;


    return 0;
}
