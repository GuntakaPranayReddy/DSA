#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr;
    unordered_map<int,int>count;
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
        count[arr[i]]++;
    }
    for(auto it:count)
    {
        if(it.second>n/2)
        {
            cout<<it.first<<endl;
        }
    }

   // time complexity is O(n) and space complexity is O(n).
}