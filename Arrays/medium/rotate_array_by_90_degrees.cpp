#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    cout<<"NO OF ROWS & COLOUMNS is = ";
    int n;
    cin>>n;
    vector<vector<int>>v(n,vector<int>(n,0));
    for(int i=0;i<n;i++)
    {
         for(int j=0;j<n;j++)
         {
            int p;
            cin>>p;
            v[i][j]=p;
         }
    }
    cout<<"BEFORE PROCESSING THE ARRAY "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
   /* int v1[n][n];   
    for(int i=0;i<n;i++)       //method-1
    {
        for(int j=0;j<n;j++)
        {
            v1[i][j]=v[n-j-1][i];
        }   
    }
    cout<<"AFTER PROCESSING THE ARRAY "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<v1[i][j]<<" ";
        }
        cout<<endl;
    }
    // time complexity O(n^2) and space complexity O(n).
    */
    for(int i=0;i<n;i++)       //method-2
    {
        for(int j=0;j<=i;j++)
        {
           swap(v[i][j],v[j][i]);               // transpose of the matrix.
        }   
    } 
	for(int i=0;i<n;i++)      
    {
        reverse(v[i].begin(),v[i].end());    // swapping the coloumns in the matrix as v is the vector.   
    }
    cout<<"AFTER PROCESSING THE ARRAY "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl; 
    } 
    // time complexity O(n^2) and space complexity O(1).
}