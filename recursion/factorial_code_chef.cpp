/*
Problem: factorial
Platform: CodeChef
Difficulty: medium
Topic: Recursion
Link: https://www.codechef.com/problems/FCTRL2
Status: unsolved
*/
#include <bits/stdc++.h>
using namespace std;



int main()
{
    // your code goes here

    int T;
    cin>>T;
while(T--){
        int n;
cin>>n;

if(n==2){
    cout<<2<<endl;
    continue;
}



    vector<int> factRes = { 1 };
    int counter = 2;
    while(counter<=n)
    {
        int l = 0;
        int carry = 0;
        while(l<factRes.size())
        {
            int result = factRes[l]*counter;
            result+= carry;
            int lastDigit = result%10;
            factRes[l] = lastDigit;
            result /= 10;
            carry = result;

            l++;
        }
        if(carry>0)
        {
            while(carry >0){
                int ldigit = carry %10;
                factRes.push_back(ldigit);
                carry /= 10;
            }
        }
        counter++;
    }

    for(long long i=factRes.size()-1;i>=0;i--){
        cout<<factRes[i];
    }
    cout<<endl;
}
    return 0;
}
