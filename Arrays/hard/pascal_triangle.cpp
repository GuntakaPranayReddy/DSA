#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    vector<vector<int>>v(n,vector<int>());   // 2D Vector 
    for(int i=0;i<n;i++)
    {   
        v[i].push_back(1);
        if(i==1)
        {
          v[i].push_back(1);  
        }
        else
        {
            for(int j=1;j<=i;j++)
            {
                
                if(j==i)
                {
                    v[i].push_back(1);
                }
                else
                {
                    v[i].push_back((v[i-1][j]+v[i-1][j-1]));
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    // TimeComplexity O(n^2) and SpaceComplexity O(n^2).
}