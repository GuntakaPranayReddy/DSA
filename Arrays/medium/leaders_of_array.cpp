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
/*  vector<int>arr1;
    for(int i=0;i<n;i++)                // method-1
    {   int flag=0;
        for(int j=i;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
               flag=-1;
               break;
            }
        }
        if(flag==0)
        {
            arr1.push_back(arr[i]);
        }
    }
    for(int i=0;i<arr1.size();i++)
    {
      cout<<arr1[i]<<" ";
    }
    cout<<endl;
    // time compexity is O(n^2) and space complexity O(k). k=arr1.size().
*/
    vector<int> arr1;
    arr1.push_back(arr[n - 1]);                // method-2
    int maxi=arr[n - 1];
    for(int i=1;i<n;i++)
    {
        if (arr[n-i-1]>maxi)
        {   
            arr1.push_back(arr[n-i-1]);
            maxi=arr[n-i-1];      
        }
    }
    arr.clear();
    reverse(arr1.begin(),arr1.end());  // to reverse the array1
    arr.insert(arr.begin(),arr1.begin(),arr1.end());  //inserting arr1 to arr
   for(int i=0;i<arr.size();i++)
   {
      cout<<arr1[i]<<" ";
   }
   cout<<endl;
   // time compexity is O(n) and space complexity O(k). k=arr1.size().

}