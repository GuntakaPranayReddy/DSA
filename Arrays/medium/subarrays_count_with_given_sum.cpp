#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr;
    cout<<"size of the arr(n) = ";
    int n,target;
    cin>>n;
    cout<<"The target is = ";
    cin>>target;
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
/*   long long count=0;     // method-1 time limit exceeded (90/93) test cases were passed 
    for(long long i=0;i<n;i++)
    {  int sum=0;
       for(long long j=i;j<n;j++)
       {
          sum=sum+arr[j];
          if(sum==target)
          {
            count++;
          }
       }    
    }
    cout<<"The number of subarrays sum equal to given sum = ";
    cout<<count<<endl;
    // time complexity is O(n^2) ans space complexity is O(1).
*/
   vector<int>prefix;                                        // method-2
   unordered_map<int,int>mpp;
   int count=0;
   prefix.push_back(arr[0]);
    for(int i=1;i<n;i++)
    {
       prefix.push_back(prefix[i-1]+arr[i]);   // prefixes sum
    }
      mpp[0]=1; 
    /* to count the target value which is directly present in the prefixsum(when target nad prefixsum both are equal) that is why we will add to the mpp. 
                               or
       you can find the count of target directly equal to prefixsum[i].i.e look at from line 62
    */
    for(int i=0;i<n;i++)
    { 
        if(mpp.find(prefix[i]-target)!=mpp.end())
        {
           count=count+mpp[prefix[i]-target];
        }
        mpp[prefix[i]]++;   // to increase or adding the prefix[i] into the map
    }
     cout<<count<<endl;
     // or
     /*
    int count = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
        if (sum == k) {
            count++;
        }
        if (mpp.find(sum - k) != mpp.end()) {
            count += mpp[sum - k];
        }
        mpp[sum]++;
    }
     */
    // time complexity is O(n^2) ans space complexity is O(1).
}