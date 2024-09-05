#include<bits/stdc++.h>
using namespace std;
int search_insert(vector<int>&v,int target)                               
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
    cout<<"the insertion of the number is at = "<<search_insert(v,target)<<endl;
}
//search_insert-> means search the targeted element and if it found then return it's index,otherwise insert it in a vector,so that vector is in sorted manner.
//time complexity is O(logn) and space complexity O(1) using the binarysearch method.