/*
Problem: Games
Platform: Codeforces
Difficulty: Easy
Topic: Implementation
Link: https://codeforces.com/problemset/problem/268/A
Status: Solved
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{

    long n;
    cin >> n;

    long arr[n][2];

    for (long i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }
    long change = 0;
    for (long i = 0; i < n; i++)
    {
        long comp = arr[i][0];
        for (long j = 0; j < n; j++)
        {
            if (comp == arr[j][1])
            {
                change++;
            }
        }
    }

    cout << change << endl;

    return 0;
}
