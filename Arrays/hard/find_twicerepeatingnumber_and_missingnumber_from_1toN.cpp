#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr;
    cout<<"size of the arr(n) = ";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        arr.push_back(p);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    unordered_map<int,int>mpp;          // method-1
    int a,b;
    for(int i=0;i<n;i++)
    {
        mpp[i+1]=0;     // it was from 1-N .(array values)    
    }
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
    for(auto it:mpp)
    {
        if(it.second==2)
        {
           a=it.first;   // twice appearing element
        }
        if(it.second==0)
        {
           b=it.first;   // missing element
        }
    }
    cout<<a<<","<<b<<endl;
    // Time complexity: O(n) Space complexity:O(n).
    /*
    //method-2
    we can solve this by using sum of n natural numbers and sum of squares of n  natural numbers.
    Time complexity: O(n) Space complexity:O(1). 
    */
}