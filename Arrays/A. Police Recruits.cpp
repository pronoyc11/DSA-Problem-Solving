/*
Problem: Police Recruits
Platform: Codeforces
Difficulty: Easy
Topic: Implementation
Link: https://codeforces.com/problemset/problem/427/A
Status: Solved
*/
#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long n;
    long long unTreatedCrimes=0;
    long long recruitedPolice=0;
    cin>>n;
    for(long long i=0; i<n; i++)
    {
        int num;
        cin>>num;


        if(num>0)
        {
            recruitedPolice +=num;

        }
        else
        {
            if(recruitedPolice>0)
            {
                recruitedPolice--;
                continue;
            }
            else
            {
                unTreatedCrimes++;
            }

        }
    }

    cout<<unTreatedCrimes<<endl;

    return 0 ;
}
