/*
Problem: A. Lucky Division
Platform: Codeforces
Difficulty: medium
Topic: Recursion
Link: https://codeforces.com/problemset/problem/122/A
Status: solved
*/
#include <bits/stdc++.h>
using namespace std;

bool checkLucky(long long n)
{

    int lastDigit = n % 10;
    if(lastDigit==4 || lastDigit==7)
    {
        n = n/10;
        if(n==0)
        {
            return true;
        }
        return checkLucky(n);
    }
    else
    {
        return false;
    }

}

int main()
{
    // your code goes here

    long long n;
    cin>>n;


    if(checkLucky(n))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        if(n%4==0 || n%7==0 || n%47==0 || n%74==0 || n%477==0 || n%744==0 || n%747==0 || n%474==0 || n%447==0 ||n%774==0 || n%777==0 || n%444==0 || n%44==0 || n%77==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }


    return 0;
}
