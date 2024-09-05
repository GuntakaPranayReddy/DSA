#include<bits/stdc++.h>
using namespace std;
int profitt(vector<int>& nums) 
{
    int n=nums.size();
    int p = INT_MAX, maxprofit=0,eachprofit;
    for (int i=0;i<n;i++) 
    {
        if (nums[i]<p) 
        {
            p = nums[i];  
        }
        else
        {
            eachprofit=nums[i]-p;
            maxprofit=max(maxprofit,eachprofit);
        }
    }
    return(maxprofit);
    
}
int main()
{
    vector<int>nums;   
    int n,val;
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
    cout<<profitt(nums)<<endl;
    // time copmlextiy is O(n) and space complexity is O(1).
    
}