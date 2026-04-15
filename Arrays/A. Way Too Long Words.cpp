/*
Problem: Way Too Long Words
Platform: Codeforces
Difficulty: Easy
Topic: String
Link: https://codeforces.com/problemset/problem/71/A
Status: Solved
*/
#include<bits/stdc++.h>

using namespace std;

void showNewWord(string oldWord){

if(oldWord.length()>10){
cout<<oldWord[0]<<(oldWord.length()-2)<<oldWord[oldWord.length()-1]<<endl;
}else{
  cout<<oldWord<<endl;
}

}

int main()
{

    int n;

    cin>>n;

    for(int i=0;i<n;i++){
        string aWord ;
        cin>>aWord;
        showNewWord(aWord);
    }

    return 0;
}
