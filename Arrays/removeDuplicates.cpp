/*
Problem: Remove duplicates
Platform: LeetCode
Difficulty: easy
Topic: Implementation
Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/2026369231/
Status: Solved
*/

#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(vector<int> &numbers){

   int i = 0;
   int j = i+1;

   while(j<numbers.size()){
    if(numbers[i] == numbers[j]){
        j++;
    }else{
       numbers[i+1] = numbers[j];
       i++;
       j++;
    }
   }
   cout<<i+1<<endl;

}


int main()
{

    vector<int> numbers = {1,1,2,3,3,3,4,4};

    removeDuplicates(numbers);

    for(int x:numbers) cout<<x<<' ';



}
