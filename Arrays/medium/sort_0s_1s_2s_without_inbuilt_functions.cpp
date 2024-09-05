#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums;
    int n,c0=0,c1=0,c2=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        nums.push_back(p);
    }
    for(int i=0;i<n;i++)
    {
        if(nums[i]==0)
        {
            c0=c0+1;
        }
        if(nums[i]==1)
        {
            c1=c1+1;
        }
        if(nums[i]==2)
        {
            c2=c2+1;
        }
    }
    nums.clear();
    for(int i=0;i<c0;i++)
    {
        nums.push_back(0);
    }
    for(int i=0;i<c1;i++)
    {
        nums.push_back(1);
    }
    for(int i=0;i<c2;i++)
    {
       nums.push_back(2);
    }
        
    for(int i=0;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
  // time complexity is O(n) and space complexity is O(1) without input inclusion.
}