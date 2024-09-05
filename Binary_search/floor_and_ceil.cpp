#include<bits/stdc++.h>
using namespace std;
int floor(vector<int>&v,int target)                // floor of x                 
{
  int left=0;
  int right=v.size()-1;
  int ans=-1;  // when it is array out of bounce.(if the value is lesserthan all array elements)
  while(left<=right)
  {
    int mid=(left+right)/2;
    if(v[mid]<=target)
    {
        ans=v[mid];
        left=mid+1;
    }
    else
    {
        right=mid-1;
    }
  }
  return ans;
}
int ceil(vector<int>&v,int target)                // ceil of x              
{
  int left=0;
  int right=v.size()-1;
  int ans=-1;             // when it is array out of bounce.(if the value is greaterthan all array elements)
  while(left<=right)
  {
    int mid=(left+right)/2;
    if(v[mid]>=target)
    {
        ans=v[mid];
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
    cout<<"size of the vector is is = ";
    cin>>n;
    cout<<"the targeted element is = ";
    cin>>target;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        v.push_back(p);
    }
    cout<<"the floor of the number is = "<<floor(v,target)<<endl;
    cout<<"the ceil of the number is = "<<ceil(v,target)<<endl;
}
//The floor of x is the largest element in the array which is smaller than or equal to x.
//The ceiling of x is the smallest element in the array greater than or equal to x.
// time complexity is O(logn) and space complexity O(1) using the binarysearch method.