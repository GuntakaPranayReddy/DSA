#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr;
    vector<int>len;
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
    int count=0;
    for(int i=0;i<n;i++)
    {    int p=0,sum=0;
        for(int j=i;j<n;j++)
        { 
            sum=sum+arr[j];
            p=p+1;
            if(sum==0)
            {
                count=max(count,p);
            }
        }
    }
    cout<<count<<endl;
    //Time complexity O(N^2) and Space complexity O(1).
}