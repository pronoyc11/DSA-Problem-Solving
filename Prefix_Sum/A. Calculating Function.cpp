/*
Problem: Calculating Function
Platform: Codeforces
Difficulty: Easy
Topic: Math
Link: https://codeforces.com/problemset/problem/486/A
Status: Solved
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long n;

    cin >> n;
    long long sum;
    if (n % 2 != 0)
    {
        sum = (n / 2) - n;
    }
    else
    {
        sum = n / 2;
    }

    cout << sum << endl;

    return 0;
}
