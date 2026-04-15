/*
Problem: Helpful Maths
Platform: Codeforces
Difficulty: Easy
Topic: Sorting, String
Link: https://codeforces.com/problemset/problem/339/A
Status: Solved
*/

#include<bits/stdc++.h>

using namespace std;

int convertToNum(char d)
{
    return d - '0';
}


int main()
{


    int s[100];
    char ch;
    int i = 0 ;

    while(cin.get(ch) && ch != '\n' )
    {

        if(isdigit(ch))
        {
            s[i++] = convertToNum(ch);
        }
    }


    for(int j=1;j<i;j++){
        int key = s[j];

        int k = j-1;
        while(k>=0 && s[k]>key){
            s[k+1] = s[k];
            k--;
        }
        s[k+1] = key;
    }

    for(int k=0;k<i;k++){
        if(k==i-1){
        cout<<s[k];
        }else{
        cout<<s[k]<<"+";
        }

    }

    cout<<endl;
    return 0;
}
