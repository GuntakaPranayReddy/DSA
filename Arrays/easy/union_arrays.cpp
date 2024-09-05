#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"size of the arr(n) = ";
    cin>>n;
    cout<<"size of the arr1(m) = ";
    cin>>m;
    vector<int>arr;
    vector<int>arr1;
    map<int,int>freq; 
    cout<<"Elements of the arr:"<<endl;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        arr.push_back(p);
    }
    cout<<"Elements of the arr1:"<<endl;
    for(int i=0;i<m;i++)
    {
        int p;
        cin>>p;
        arr1.push_back(p);
    }
    cout<<"Elements of the arr= ";
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Elements of the arr1= ";
     for(int i=0;i<m;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }
    for(int i=0;i<m;i++)
    {
        freq[arr1[i]]++;
    }
    int k=freq.size();
    cout<<"Elements of the union_arr= ";
    for(auto it:freq)
    {
        cout<<it.first<<" ";
    }
    cout<<endl;
    // in stead of map we can use set which is ordered and unique.
    // we cannot done using the unordered_map,unordered_set because it not sorted. if we use that then apply sort function
    // time complexity and space complexity is O(n+m+k).In code k is the space taken to print the output.

    

}