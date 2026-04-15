/*
Problem: Kuriyama Mirai's Stones
Platform: Codeforces
Difficulty: Medium
Topic: Prefix Sum
Link: https://codeforces.com/problemset/problem/433/B
Status: Solved
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin >> n;

    vector<long long> stones(n), sortedStones(n);

    // Input
    for(long i = 0; i < n; i++)
    {
        cin >> stones[i];
        sortedStones[i] = stones[i];
    }

    // Sort the copied array
    sort(sortedStones.begin(), sortedStones.end());

    // Prefix sums
    vector<long long> prefixStones(n), sortedPrefix(n);

    prefixStones[0] = stones[0];
    sortedPrefix[0] = sortedStones[0];

    for(long i = 1; i < n; i++)
    {
        prefixStones[i] = prefixStones[i-1] + stones[i];
        sortedPrefix[i] = sortedPrefix[i-1] + sortedStones[i];
    }

    // Queries
    long m;
    cin >> m;

    while(m--)
    {
        long type, l, r;
        cin >> type >> l >> r;

        if(type == 1)
        {
            if(l == 1)
                cout << prefixStones[r-1] << endl;
            else
                cout << prefixStones[r-1] - prefixStones[l-2] << endl;
        }
        else
        {
            if(l == 1)
                cout << sortedPrefix[r-1] << endl;
            else
                cout << sortedPrefix[r-1] - sortedPrefix[l-2] << endl;
        }
    }

    return 0;
}
