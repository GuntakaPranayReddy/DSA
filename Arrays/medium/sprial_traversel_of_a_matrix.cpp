#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
   vector<vector<int>>arr(m,vector<int>(n));
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int roundedUp = min((n+1)/2,(m+1)/2);
    vector<int>arr1;
    for(int i=0;i<roundedUp;i++)
    {
        for(int j=i;j<n-i;j++)
        {
           arr1.push_back(arr[i][j]);
        }
        for(int k=i+1;k<m-i;k++)
        {
           arr1.push_back(arr[k][n-1-i]);
        }
        for(int l=n-i-2;l>=i&&(m-1-i)!=i;l--)
        {
            arr1.push_back(arr[m-1-i][l]);
        }
        for(int p=m-i-2;p>i&&(n-1-i)!=i;p--)
        {
            arr1.push_back(arr[p][i]);
        }
    }
    for(int i=0;i<arr1.size();i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
}
// Time Complexity: O(m * n) and Space Complexity: O(m * n)
/*
m=3
n=1
7
6
9
7 6 9 6  here 6 is unwantledly repeated
*/  //this example for if this condition doesn't present "(n-1-i)!=i"
// similarly for "(m-1-i)!=i" it repeats same value like above ones
    
