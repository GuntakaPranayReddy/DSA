#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    cout<<"NO OF ROWS = ";
    int n;
    cin>>n;
    cout<<"NO OF COLOUMNS = ";
    int m;
    cin>>m;
    int v[n][m];
    for(int i=0;i<n;i++)
    {
         for(int j=0;j<m;j++)
         {
            cin>>v[i][j];
         }
    }
    cout<<"BEFORE PROCESSING THE ARRAY "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    int flag=0,p,q;
    int v1[n][m];
    for(int i=0;i<n;i++)
    {
         for(int j=0;j<m;j++)
         {
            v1[i][j]=v[i][j];
         }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(v1[i][j]==0)
            {
               
                p=i;
                q=j;
                for(int q=0;q<m;q++)
                {
                    v[p][q]=0;
                }
                for(int p=0;p<n;p++)
                {
                    v[p][q]=0;
                }
            }
        }   
    }
    cout<<"AFTER PROCESSING THE ARRAY "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    // time complexity O(n^2) and space complexity O(n).
	
}