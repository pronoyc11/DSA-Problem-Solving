/*
Problem: Pangram
Platform: Codeforces
Difficulty: Easy
Topic: String, Set
Link: https://codeforces.com/problemset/problem/520/A
Status: Solved
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin>> n;

   vector<char> freqChar(26,'0');

   while(n--){
        char ch;
        cin>>ch;
        char actualLetter ;
        if(ch >= 'a'){
        actualLetter = ch - 'a';
        }else{
        ch = ch + 32;
        actualLetter = ch - 'a';
        }

        freqChar[actualLetter] = ch;
   }

   int i = 26;
   bool flag = true;
   while(i--){
    //cout<<"i : " <<i <<"freq[i] : "<<freqChar[i]<<endl;
    if(freqChar[i] == '0'){
        flag = false;
    }

   }
   if(flag){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }




    return 0 ;
}
