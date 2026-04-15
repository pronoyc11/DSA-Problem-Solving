/*
Problem: Quick Sort
Platform: Custom
Difficulty: Easy
Topic: Arrays, Counting
Link: N/A
Status: Solved
*/

#include<bits/stdc++.h>

using namespace std;


void swap(int &a,int &b){

int temp = a;
a = b;
b = temp;
}

int partition(int arr[],int low,int high){
int pivot = arr[high];
int i = low - 1;///ensuring the position of the smallest value

for(int j=low;j<high;j++){
    if(arr[j]<= pivot){

        i++;///Only gathering the left elements at first.
        swap(arr[i],arr[j]);
    }
}

swap(arr[i+1],arr[high]); ///Bringing the pivot to the middle
return i+1;
}


void quickSort(int arr[],int low,int high){
if(low<high){
    int q = partition(arr,low,high);
    quickSort(arr,low,q-1); ///q is altered to avoid overwriting pivot.
    quickSort(arr,q+1,high);
}
}



int main(){

int n;
cin>>n;
int arr[n];
cout<<"put the array values: ";
for(int i=0;i<n;i++) cin>>arr[i];

quickSort(arr,0,n-1);

///After sorting;
for(int i=0;i<n;i++) cout<<arr[i] <<" ";


}
