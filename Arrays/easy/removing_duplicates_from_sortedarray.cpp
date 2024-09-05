#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
/* 
    int p=0,q=1;                      // method-1
    while(p<n && q<n)
    {
        if(arr[p]==arr[q])
        {
           arr[q]=INT_MAX;
           q++;
        }
        else
        {
            p++;
            q++;
        }           
            
       while(arr[p]==INT_MAX)
       {
         p++; 
       }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int>arr1;
    int i=0;
    while(i<n)
    {
       if(arr[i]!=INT_MAX)
       {
        arr1.push_back(arr[i]); 
       }
       i++;
    }
    for(int k=0;k<arr1.size();k++)
    {
        cout<<arr1[k]<<" ";
    }
*/ 
   unordered_map<int,int>mpp;                    // method-2
   for(int i=0;i<n;i++)
   {
    mpp[arr[i]]++;
   }
   for(int i=0;i<n;i++)
   {
     mpp[arr[i]]=1;
   }
   arr.clear();
   for(auto it:mpp)
   {
     arr.push_back(it.first);
   }
   sort(arr.begin(),arr.end());
   for(auto it:arr)
   {
     cout<<it<<" ";
   }
   cout<<endl;
   // if we use map then sorting function will be used.
}