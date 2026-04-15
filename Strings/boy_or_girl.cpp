/*
Problem: Boy or Girl
Platform: Codeforces
Difficulty: Easy
Topic: Set, String
Link: https://codeforces.com/problemset/problem/236/A
Status: Solved
*/

#include<bits/stdc++.h>

using namespace std;


int main(){

char userName[100];

char ch;
int i=0;
while(cin.get(ch) && ch != ' ' && ch != '\n'){
            bool isThere = false;
        for(int j=0;j<i;j++){
            if(userName[j] == ch) {
                    isThere = true;
                break;
            }
        }

        if(isThere){
            continue;
        }else{
           userName[i++] = ch;
        }

}
if(i%2 == 0 ){

    cout<<"CHAT WITH HER!"<<endl;
}else{
    cout<<"IGNORE HIM!"<<endl;
}

return 0;
}
