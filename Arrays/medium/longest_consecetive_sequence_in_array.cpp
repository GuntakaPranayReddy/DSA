#include<bits/stdc++.h>
#include<iostream>
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
    cout<<"Before sorting the array = ";
    for(int i=0;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    cout<<"After sorting the array = ";
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    int i=0,p=0;
    while(i<n)
    {
        int j=i,count=0;
        while(j<n)
        {
            if(nums[j]==nums[j+1])
            {
                nums.erase(nums.begin()+j);  // for removing the duplicates
                
            }
            if(count==0 && (nums[j]+1 == nums[j+1]))
            {
                count+=2;
            }
            else if(count!=0 && (nums[j]+1 == nums[j+1]))
            {
                count+=1;
            }
            else
            {
               break;
            }
            j++;
        }
        if(p<count)
        {
            p=count;
        }
        if(count==0)
        {
            i++;
        }
        else
        {
           i+=count;
        }
    }
    cout<<p<<endl;
   // time complexity O(n^2) and space complexity O(1).
}