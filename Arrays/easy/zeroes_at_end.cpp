#include<bits/stdc++.h>
using namespace std;
int main()
{
  /* vector<int>nums;  method-1
    vector<int>nums1;
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
    for(int i=0;i<n;i++)
    {  
        if(nums[i] != 0)
        {  
           nums1.push_back(nums[i]);   
        }
    }
    int m= nums1.size();
    while(m<n)
    {
        nums1.push_back(0);
        m++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<nums1[i]<<" ";
    }
    cout<<endl;
     // time and space comlexities is O(n) in all cases. 
    
    */

    /*vector<int> nums;       // method-2
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
    for(int i=0;i<n;i++)
    {
        int k=i;
        while(k>=0 && nums[k]==0 )
        {
            swap(nums[k],nums[k+1]);
            k--;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    // using insertion sort of time complexity O(n^2) in avg,worst case & O(n) in best case  and space  complexity O(n). */
    


}