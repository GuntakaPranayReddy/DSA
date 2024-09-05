#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr;
    cout<<"size of the arr(n) = ";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        arr.push_back(p);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int sum=0,max_val=INT_MIN;
    for(int i=0;i<n;i++)        // to print max_subarray sum
    {
        sum+=arr[i];
        max_val=max(max_val,sum);
        if(sum<0)
        {
            sum=0;
        }
    }
    cout<<"The maximum subarray sum is= "<<max_val<<endl;
    int target=max_val;
    int p=0,count=0,temp_count=0,ind;                                
    for(int i=0;i<n;i++)    // to print elements of the max_subarray sum . here the target is maximum ,so we can directly count the elements.                       
    {
        if(p<target)
        {
          p=p+arr[i];
          temp_count++;
        }
        if(p==target)
        {
          ind=i;
          count=temp_count;
          break;
        }
        if(p<0)
        {
            p=0;
            temp_count=0;
        }    
    }
    cout<<"The length of the subarray is = "<<count<<endl;     // length of maximum subarray sum
    cout<<"The elements in the subarray of that array are = "; //elements of maximum subarray sum
    for(int i=ind-count+1;i<=ind;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // Time complexity: O(n) and Space complexity:O(1).
}