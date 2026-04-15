/*
Problem: Anton and letters
Platform: Codeforces
Difficulty: Easy
Topic: frequency array
Link:https://codeforces.com/problemset/problem/443/A
Status: Solved
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    char charArr[26];

    char ch;
    int uniqueFrequency =0;
    while(cin.get(ch) && ch != '\n')
    {

        if(ch != ',' && ch != ' ' && ch != '{' && ch != '}')
        {

            int chAsci = ch - 'a' ;

            if(charArr[chAsci] == ch)
            {
                continue;
            }
            else
            {
                charArr[chAsci] = ch ;
                uniqueFrequency++;
            }
        }
        else
        {
            continue;
        }
    }

    cout<<uniqueFrequency<<endl;

    return 0 ;
}
