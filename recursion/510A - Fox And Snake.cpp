


/*
Problem: 510A - Fox And Snake
Platform: Codeforces
Difficulty: easy
Topic: Recursion
Link: https://codeforces.com/problemset/problem/510/A
Status: solved
*/




#include <bits/stdc++.h>



using namespace std;

int main()
{


int n,m;
cin>>n>>m;

    bool sides = true;
for(int i=1;i<=n;i++){

    for(int j=1;j<=m;j++){
        if(i%2==0){
          if(sides){

               if(j==m){


            cout<<"#";
            }else{
            cout<<".";
            }
          }else{
           if(j==1){


            cout<<"#";
            }else{
            cout<<".";
            }

          }
        }else{
            cout<<"#";
        }
    }
cout<<endl;
if(i%2==0){
    sides = !sides;
}

}





    return 0;
}
