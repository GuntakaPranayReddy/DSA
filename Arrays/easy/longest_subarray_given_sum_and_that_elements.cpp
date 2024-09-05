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
    int count=0,ind;
    for(int i=0;i<n;i++)
    {
        int j=i,sum=0,p=0;
        while(j<n)
        {
            if(sum<target)
            {
                 sum=sum+arr[j];
                 p=p+1;
            }
            if(sum==target)
            {
                if(p>count)
                {
                    count=p;
                    ind=j;
                }
            }
            
            j++;
        }
    }
    cout<<"The length of the subarray is = "<<count<<endl;
    cout<<"The elements in the subarray of that array are = ";
    int k=ind-count+1;// for going to starting element of the longest subarray
    for(int i=k;i<count+k;i++)  // count+k=ind+1
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // time complexity is O(n^2) ans space complexity is O(1).

}