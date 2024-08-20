// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
// Input :
// 1 1 1
// 1 0 1
// 1 1 1
// Output :
// 1 0 1
// 0 0 0
// 1 0 1

#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;
int main(){
    //through row
    int n;
    cout<<"Enter the rows/ columns: ";
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];

        }
    }
   int x= INT_MIN; //row
   int y=INT_MIN; //col
 cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==0){
            x=i;
            y=j;

            
            }
        }
       
    }
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           a[i][y]=0;
           a[x][j]=0;
           cout<<a[i][j]<<" ";

        }
        cout<<endl;
    }




}