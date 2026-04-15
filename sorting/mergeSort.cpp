/*
Problem: Merge Sort
Platform: Custom 
Difficulty: Easy
Topic: Arrays, Counting
Link: N/A
Status: Solved
*/

#include<bits/stdc++.h>

using namespace std;

void merge(int arr[],int l,int m,int r){

    int n1 = m - l +1;
    int n2 = r - m ; //normally amra index goni 1 theke, but jehetu lefter dike 1 kome shunno hoy, sesh pojonto size thik rakhte left er sathei 1 jog korte hoy, jekhane index 0 hoa maneo ekta element ache, ba size tkhn o ek.
    int L[n1],R[n2];

    for(int i=0;i<n1;i++){
        L[i] = arr[l+i];

    }

    for(int j=0;j<n2;j++){
        R[j] = arr[m+j+1];
    }
    int i = 0,j=0,k=l;
    while(i<n1 && j<n2 ){

        if(L[i]<R[j]){
            arr[k++] = L[i++];
        }else{
            arr[k++] = R[j++];
        }
    }

    while(i<n1) arr[k++] = L[i++];
    while(j<n2) arr[k++] = R[j++];

}

void mergeSort(int arr[],int l,int r){

if(l<r){
    int m = l + (r-l)/2 ;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
}

}


void showArr(int arr[],int n){
for(int i=0;i<n;i++) cout<<arr[i]<<" ";
cout<<endl;
}

int main(){

int arr[5] = {5,3,1,4,2};
cout<<"Before Sorting : ";
showArr(arr,5);
mergeSort(arr,0,4);
cout<<"After Sorting : ";
showArr(arr,5);



return 0;
}
