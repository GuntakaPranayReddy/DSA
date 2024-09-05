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
/*
    vector<int>arr1;
    vector<int>arr2;
    for(int i=0;i<n;i++)                      // method-1
    {
        if(arr[i]>=0)
        {
            arr1.push_back(arr[i]);
        }
        else
        {
            arr2.push_back(arr[i]);
        }
    }
    arr.clear();
    for(int i=0;i<n/2;i++)
    {
       arr.push_back(arr1[i]);
       arr.push_back(arr2[i]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    // time complexity O(n) and space complexity O(2n). // generally O(2n) means O(n) only.
*/
    vector<int>arr0(n,0);                
    int epos=0,opos=1,i=0;                            // method-2
    while(i<n)
    {
        if(arr[i]>0)
        {
            arr0[epos]=arr[i];
            epos+=2;
        }
        else
        {
            arr0[opos]=arr[i];
            opos+=2;
        }
        i++;
    }
    arr.clear();
    arr.insert(arr.begin(),arr0.begin(),arr0.end());
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    // time complexity O(n) and space complexity O(n).

}