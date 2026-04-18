/*
Problem: 1352A - Sum of Round Numbers
Platform: Codeforces
Difficulty: easy
Topic: Recursion
Link: https://codeforces.com/problemset/problem/1352/A
Status: solved
*/
#include <bits/stdc++.h>
using namespace std;

int roundNum(long n,vector<long long> &arr)
{
    if(n>0 && n<10)
    {
        arr.push_back(n);
        //return n;
    }
    else if(n>=10 && n<100)
    {
        long long toBepushed = (n/10)*10 ;
        arr.push_back(toBepushed);
        return roundNum(n%10,arr);
    }
    else if(n>=100 && n<1000)
    {
        long long toBePushed = (n/100)*100 ;
        arr.push_back(toBePushed);
        return roundNum(n%100,arr);
    }
    else if(n>=1000 && n<10000)
    {
        long long toBePushed = (n/1000)*1000;
        arr.push_back(toBePushed);
        return roundNum(n%1000,arr);
    }
    else if(n>= 10000 && n<100000)
    {
        long long toBePushed = (n/10000)*10000;
        arr.push_back(toBePushed);
        return roundNum(n%10000,arr);
    }
}

int main()
{
    long T;
    cin>>T;
    while(T--)
    {
        long n;
        cin>>n;
        vector<long long> arr;

        roundNum(n,arr);
        cout<<arr.size()<<endl;
        for(long i=0; i<arr.size(); i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}

/*
///Alternative Solution : (Using place power of the number
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> result;
        int place = 1;

        while(n > 0) {
            int digit = n % 10;

            if(digit != 0) {
                result.push_back(digit * place);
            }

            n /= 10;
            place *= 10;
        }

        cout << result.size() << endl;
        for(int x : result) {
            cout << x << " ";
        }
        cout << endl;
    }
}

*/


