#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<" the size of the vector is = ";
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        nums.push_back(p);
    }
    int threshold;
    cout<<"the threshold value is = ";
    cin>>threshold;
    int maxi=*max_element(nums.begin(),nums.end());
    int left=1;                                                      // method-1  
    int right=maxi;
    int p=-1;
    while(left<=right)                                                                     
    {
        int mid =(right+left)/2;
        int sum=0;
        for(int j=0;j<nums.size();j++)
        {
            float f = static_cast<float>(nums[j]) / mid;
            sum += ceil(f);
        }
        if(sum<=threshold)
        {
            p=mid;
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    cout<<"the smallest divisor is = "<<p<<endl;     
   // time complexity is O(nlogn) and Space complexity O(1).
   /*                                                                 
    int p=-1;                                                       // method-2
    for(int i=1;i<=maxi;i++)                                           
    {
        int sum=0;
        for(int j=0;j<nums.size();j++)
        {
            float f = static_cast<float>(nums[j]) / i;
            sum += ceil(f);
        }
        cout<<"sum["<<i<<"] is = "<<sum<<endl;
        if(sum<=threshold)
        {
            p=i;
            break;
        }           
    }  
    cout<<"the smallest divisor is = "<<p<<endl;     
    // time complexity is O(n^2) and Space complexity O(1). 
   */
}