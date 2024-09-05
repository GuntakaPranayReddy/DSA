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
   next_permutation(arr.begin(),arr.end());   // from this we can get the next permutation.(built_in function)
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   
    
    
}