
/*
Problem: Beautiful matrix
Platform: Codeforces
Difficulty: Easy
Topic: 2d arrays
Link:https://codeforces.com/problemset/problem/263/A
Status: Solved
*/




#include<iostream>

using namespace std;


int main() {

    int p,q;

    for(int i= 1; i<=5; i++) {
        for(int j=1; j<=5; j++) {
            int num;
            cin>>num;

            if(num == 1) {
                p= i;
                q= j;
            }
        }
    }
 int moves = abs(3-p) + abs(3-q) ;

 cout<< moves<<endl;
    return 0;
}
