#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr1; 
    cout<<"size of the arr1(n) = ";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        arr1.push_back(p);
    }
    vector<int>arr2; 
    cout<<"size of the arr1(m) = ";
    int m;
    cin>>m;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        arr2.push_back(p);
    }
    cout<<"Elements in the 1st array is = ";
    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    cout<<"Elements in the 2nd array is = ";
    for(int i=0;i<m;i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
   

}