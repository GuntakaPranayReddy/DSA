#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr;
    vector<int>arr1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int p;
         cin>>p;
         arr.push_back(p);

    }
    arr1.assign(arr.begin(),arr.end());
    sort(arr1.begin(),arr1.end());
    /* int i=0;
    int flag=0;
    while(i<n)
    {
        if(arr[i]==arr1[i])
        {
             i++;
        }
        else
        {
            flag=1;
            break;
        }
       
    }
    if(flag==0)
    {
     cout<<" the given array is sorted"<<endl;
    }
    else
    {
     cout<<" the given array is not sorted"<<endl;

    } */
    int r=0;
    int k=1;
    vector<int>checkarr;
    for(int r=0;r<n;r++)
    {
        for(int i=0;i<n;i++)
        {
            checkarr.push_back(arr1[(r+i)%n]);
        }
        for(int i=0;i<n;i++)
        {
            cout<<checkarr[i]<<" ";
        }
        cout<<endl;
        int j=0;
        int temp=0;
        while(j<n)
        {
            if(arr[j]==checkarr[j])
            {
                j++;
            }
            else
            {
                temp=-1;
                break;
            }   
       }
       if(temp==0)
       {
         k=0;
         break;
       }
       checkarr.clear();
    }
    if(k==0)
    {
        cout<<"array can be rotated"<<endl;
    }
    else
    {
        cout<<"array cannot be rotated"<<endl;
    }

}