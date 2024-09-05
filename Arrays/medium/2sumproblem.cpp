#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
       nums.push_back(p);
    }
    for(int i=0;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    int target,p=-1;
    cin>>target;
   for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                cout<<i<<","<<j<<endl; // solution is found
                p=0;
                break;
            }
        }
    }
    if(p==-1)
    {
        cout<<"-1,-1"<<endl;  // solution is not found
    }
}