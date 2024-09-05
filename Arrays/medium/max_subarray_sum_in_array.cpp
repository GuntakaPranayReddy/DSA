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
   /* int sum=nums[0];  // method-1   (207/210 test cases passed in leetcode) timelimit exceeded
    int i=0;
    while(i<n)
    {
        int add=0;
        int j=i;
        while(j<n)
        {
            add=add+nums[j];
            if(sum<add)
            {
                sum=add;
            }
            if(add<0)
            {
                break;
            }
            j++;
        } 
        i++;  
    }
    cout<<sum<<endl; 
    // timecomplexity is O(n^2) and space complexity is O(1).
    */
    int maxi=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+nums[i];
        maxi=max(maxi,sum); // to find maximum value between to number.
        if(sum<0)
        {
            sum=0;
        }
    }
    cout<<maxi<<endl;
    // timecomplexity is O(n) and space complexity is O(1)

}
