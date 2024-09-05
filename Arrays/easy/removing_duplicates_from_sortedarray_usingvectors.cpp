#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    vector<int>arr1;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        arr.push_back(k);
    }
    int p=0,q=1;
    while(p<n && q<n)
    {
        if(arr[p]==arr[q])
        {
           arr[q]=INT_MAX;
           arr.push_back(arr[q]);
           q++;
        }
        else
        {
            p++;
            q++;
        }           
            
       while(arr[p]== INT_MAX)
       {
         p++; 
       }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i=0;
    int j=0;
    while(i<n)
    {
       if(arr[i]!= INT_MAX)
       {
         arr1.push_back(arr[i]);
         j++;
       }
       i++;
    }
    arr.clear();
     for(int j=0;j<arr1.size();j++)
    {
       arr.push_back(arr1[j]);
    }
    for(int j=0;j<arr1.size();j++)
    {
        cout<<arr[j]<<" ";
    }
}
// time nad space complexities is O(n).

 /*unordered_map<int,int>mpp;                    // method-2
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
   */