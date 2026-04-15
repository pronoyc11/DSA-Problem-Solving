/*
Problem: Word
Platform: Codeforces
Difficulty: Easy
Topic: String
Link: https://codeforces.com/problemset/problem/59/A
Status: Solved
*/
#include<iostream>

using namespace std;


int main()
{
    string s;

    cin>>s;
    int numCap=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] < 97 )
        {
            numCap++;
        }

    }
    if((s.length()-numCap)<numCap)
    {
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] >= 97 )
            {
                s[i] = (char)(s[i] - 32);
            }

        }
    }
    else
    {
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] < 97 )
            {
                s[i] = (char)(s[i] + 32);
            }

        }
    }

    cout<<s <<endl;


    return 0;
}
