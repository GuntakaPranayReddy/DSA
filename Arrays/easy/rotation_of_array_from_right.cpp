#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums;
    int k,n;
    cin>>n;
    cin>>k;
    k=k%n;     // if k greaterthan n then it will be useful
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        nums.push_back(p);
    }
   /* 
    vector<int>nums1;                          // method-1
    for(int i=0;i<n;i++)       
    {
        nums1.push_back(nums[(i+n-k)%n]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<nums1[i]<<" ";
    }
    cout<<endl;
    // time and space complexity is O(n)
    */                 

    /*
    reverse(nums.begin(),nums.begin()+n-k);     // method-2
    reverse(nums.begin()+n-k,nums.end());
    reverse(nums.begin(),nums.end()); 
    for(int i=0;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    // time complexity is O(n) and space complexity is O(1).
    */
        
}