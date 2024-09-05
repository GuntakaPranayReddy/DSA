#include<bits/stdc++.h>
using namespace std;
int main()  
{
//use set here as it is ordered and unique so we can directly get the values.(first element is minimum and last element is maximum, similarly second_maximum and second_minimum)
    int max_val,min_val;
    int secmax_val,secmin_val;
    int p,q;
    int n;
    cout<<" size of the array = ";
    cin>>n;
    int arr[n];
    cout<<"Elements in the array "<<endl;
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    max_val=arr[0];
    min_val=arr[0];
     for(int i=0;i<n;i++)
    {
      if(arr[i]>max_val)
      {
        max_val=arr[i];
      }
    }
    cout<<"the largest element in the array is = "<<max_val<<endl;
     for(int i=0;i<n;i++)
    {
      if(arr[i]<min_val)
      {
        min_val=arr[i];
      }
    }
    cout<<"the smallest element in the array is = "<<min_val<<endl;
    if(n==1)
    {
        secmax_val=-1;
        secmin_val=-1;
        cout<<"the second largest element in the array is = "<<secmax_val<<endl;
        cout<<"the second smallest element in the array is = "<<secmin_val<<endl;
        
    }
    else
    {
        p=max_val-min_val;
        for(int i=0;i<n;i++)
        {
        if(max_val-arr[i]==0)
        {
          continue;
        }
        
        if(max_val-arr[i]<p)
        {
          p=max_val-arr[i];
        }
        
        }
        secmax_val=max_val-p;
        cout<<"the second largest element in the array is = "<<secmax_val<<endl;
        q=max_val-min_val;
        for(int i=0;i<n;i++)
        {
        if(arr[i]-min_val==0 )
        {
          continue;
        }
        
        if(arr[i]-min_val<q)
        {
            q=arr[i]-min_val;
        }
        
        }
        secmin_val=min_val+q;
        cout<<"the second smallest element in the array is = "<<secmin_val<<endl;
    }
    
    

}
