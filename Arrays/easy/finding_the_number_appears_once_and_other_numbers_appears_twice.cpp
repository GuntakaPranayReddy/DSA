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
  unordered_map<int,int>mpp;        
    for(int i=0;i<n;i++)               // method-1
    {
        mpp[arr[i]]++; 
    }
    for(int i=0;i<n;i++)     
    {
        if(mpp[arr[i]]==1)
        {
            cout<<arr[i]<<endl;
        }
    }
    // time complexity is O(n) and space complexity is O(n). 
/*
   sort(arr.begin(),arr.end());    // method-2(this is only applicable for given a non-empty array of integers nums, every element appears twice except for one. Find that single one)
   for(int i=0;i<n;i=i+2)     
    {
       if(arr[i]!=arr[i+1])
       {
         cout<<arr[i]<<endl;
         break;
       }
    }
    // time complexity is O(n) and space complexity is O(1) always without input size in any question had written (mostly).
*/
}