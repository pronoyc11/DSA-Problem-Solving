/*
Problem: Petya and Strings
Platform: Codeforces
Difficulty: Easy
Topic: String
Link: https://codeforces.com/problemset/problem/112/A
Status: Solved
*/
#include<iostream>

using namespace std;


int main()
{

    string a,b;

    cin>>a;
    cin>>b;


    for(int i=0;i<a.length();i++){
        if(a[i]<97){
            a[i] = a[i] + 32;
        }
        if(b[i]<97){
            b[i] = b[i] + 32;
        }
    }

                 int lexic = a.compare(b);

                 if(lexic<0){
                    cout<<-1<<endl;
                 }else if(lexic > 0){
                    cout<<1<<endl;
                 }else{
                    cout<<0<<endl;
                 }

    return 0;
}




