/*
Problem: Theater_Square(Needs revise)
Platform: Codeforces
Difficulty: easy
Topic: Math
Link: https://codeforces.com/problemset/problem/1/A
Status: solved
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    long long x = (n + a - 1) / a; // ceil(n/a)
    long long y = (m + a - 1) / a; // ceil(m/a)

    cout << x * y << endl;

    return 0;
}
