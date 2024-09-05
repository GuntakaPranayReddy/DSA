#include<bits/stdc++.h>
using namespace std;
int lower_bound(vector<int>&v,int target)                // lower bound of x                 
{
  int left=0;
  int right=v.size()-1;
  int ans=v.size();
  while(left<=right)
  {
    int mid=(left+right)/2;
    if(v[mid]>=target)
    {
        ans=mid;
        right=mid-1;
    }
    else
    {
        left=mid+1;
    }
  }
  return ans;
}
int upper_bound(vector<int>&v,int target)                // upper bound of x               
{
  int left=0;
  int right=v.size()-1;
  int ans=v.size();
  while(left<=right)
  {
    int mid=(left+right)/2;
    if(v[mid]>target)
    {
        ans=mid;
        right=mid-1;
    }
    else
    {
        left=mid+1;
    }
  }
  return ans;
}
int main()
{
    int n,target;
    cout<<" size of the vector is is = ";
    cin>>n;
    cout<<" the targeted element is = ";
    cin>>target;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        v.push_back(p);
    }
    cout<<"the lower bound of the number is = "<<lower_bound(v,target)<<endl;
    cout<<"the upper bound of the number is = "<<upper_bound(v,target)<<endl;
}
// lower bound -> Smallest index such that arr[ind]>=n.
// upper bound -> Smallest index such that arr[ind]>n.
// time complexity is O(logn) and space complexity O(1) using the binarysearch method.