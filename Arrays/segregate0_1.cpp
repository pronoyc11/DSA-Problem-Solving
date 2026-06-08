
/*
Problem: Segregate 0 and 1
Platform: LeetCode
Difficulty: medium
Topic: Implementation
Link: https://www.geeksforgeeks.org/problems/segregate-0s-and-1s5106/1
Status: Solved
*/


#include <bits/stdc++.h>
using namespace std;

void swap(int &a,int &b){
   a = a^b;
    b = a^b;
    a = a^b;
}

 void segregate0and1(vector<int> &arr) {
        // code here

        int j = 0 ;
        int i = j-1;

        for(;j<arr.size();j++){
            if(arr[j]== 0){
              i++;
              swap(arr[j],arr[i]);
            }
        }



    }

/* for two pointers
    void segregate0and1(vector<int> &arr) {
       int i=0;
       int j = arr.size()-1;
       
       while(i<j){
           if(arr[i]==1 && arr[j]==0){
               swap(arr[i],arr[j]);
               i++;
               j--;
           }else if(arr[i]==0 && arr[j] == 0){
               i++;
           }else{
               j--;
           }
       }



    }


*/





int main()
{

    vector<int> numbers = {1,0,1,1,0,1,0,0};

    segregate0and1(numbers);

    for(int x:numbers) cout<<x<<' ';



}
