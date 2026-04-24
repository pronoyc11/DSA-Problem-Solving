/*
Problem: All_subsets
Platform: Custom
Difficulty: easy
Topic: Recursion
Link: #
Status: solved
*/

///Recursion tree te bampasher gulor result er upor dan pasher call nirvor kore.
///i Sobar nicher step e gelei arr.size() er soman hoy ebong tokhoni subset ta print er proyojon pore
#include <bits/stdc++.h>
using namespace std;
/*
void generate(int i, vector<int>& arr, vector<int>& subset) {
    // Base case
    if(i == arr.size()) {
        // print subset
        cout << "[ ";
        for(int x : subset) cout << x << " ";
        cout << "]\n";
        return;
    }

    // 1. Take element
    subset.push_back(arr[i]);
    generate(i + 1, arr, subset);

    // Backtrack
    subset.pop_back();

    // 2. Skip element
    generate(i + 1, arr, subset);
}
*/


void generate(int i,vector<int> arr,vector<int> subset){
            if(i==arr.size()){
                cout<<"[";
                for(int x:subset) cout<<x<<",";
                cout<<"]\n";
                return;
            }
            subset.push_back(arr[i]);
            generate(i+1,arr,subset);

            subset.pop_back();
            generate(i+1,arr,subset);
}






int main() {
    vector<int> arr = {1, 2,3};
    vector<int> subset;

    generate(0, arr, subset);
}
