#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr;
    vector<int>arr1;
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
/* int val=0;
   for(int i=0;i<n;i++)    method-1
    {
        if(arr[i]==1)
        {
          val=val+1;
        }
        else 
        {
            arr1.push_back(val);
            val=0;
        }
        if(i==n-1 && val>0)
        {
            arr1.push_back(val);
        } 
    } 
  
    for(int i=0;i<arr1.size();i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    int maxi =*max_element(arr1.begin(),arr1.end());
    cout<<"The maximum consecutive 1's in the array is = "<<maxi<<endl;
    // time complexity is O(n) ans space complexity is O(n)
*/
    int val=0,max=0;
    for(int i=0;i<n;i++)     //method-2
    {
        if(arr[i]==1)
        {
          val=val+1;
        }
        else 
        {
           if(val>max)
           {
             max=val;
           }
           val=0;
        }
        if(i==n-1 && val>0)
        {
           if(val>max)
           {
             max=val;
           } 
        } 
    }
    cout<<"The maximum consecutive 1's in the array is = "<<max<<endl;
    // time complexity is O(n) ans space complexity is O(1). In above method-2 is simple and better than method-1.

}