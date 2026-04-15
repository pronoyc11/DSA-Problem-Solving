/*
Problem: Insertion Sort
Platform: Custom 
Difficulty: Easy
Topic: Arrays, Counting
Link: N/A
Status: Solved
*/

#include<bits/stdc++.h>

using namespace std;


int main(){

int n ;
cout<<"How many? ";
cin>>n;
int arr[n];
cout<<"Put values in the array: ";
for(int i=0;i<n;i++) cin>>arr[i];

for(int j=1;j<n;j++){
    int key = arr[j];
    int i = j-1;
    while(i>=0 && arr[i]>key){
        arr[i+1] = arr[i];
        i--;
    }
    arr[i+1] = key;
}

for(int i=0;i<n;i++) cout<<arr[i]<<" ";


return 0;
}
