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
    vector<pair<int,int>>v;
   for(int i=0;i<n-1;i++)
   {
     for(int j=i+1;j<n;j++)
     {
        if(arr[i]>2*arr[j])
        {
          v.push_back({arr[i],arr[j]});
        }
     }
   }
   cout<<v.size()<<endl;
   for(auto it:v)
   {
      cout<<it.first<<","<<it.second<<endl;
   }
}