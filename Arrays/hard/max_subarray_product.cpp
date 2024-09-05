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
    int prod=1,max_val=INT_MIN;
    /*
    for(int i=0;i<n;i++)        // to print max_subarray product (187/190) test cases being passed.it shows TLE
    {  
       prod=1;                     // method-1
       for(int j=i;j<n;j++)
       {
           prod=prod*arr[j];
           max_val=max(max_val,prod);
           if(prod==0)
           {
             prod=1;
           }
           if(max_val<arr[j])
           {
            max_val=arr[j];
           }
       } 
    }
    cout<<"The maximum subarray product is= "<<max_val<<endl;
    // Time complexity: O(n) and Space complexity: O(1).
    */                           
    for(int i=0;i<n;i++)        // method-2(best method)
    {  

      prod=prod*arr[i];
      max_val=max(max_val,prod);
      if(prod==0)
      {
        prod=1;
      }
      if(max_val<arr[i])
      {
        max_val=arr[i];
      }       
        
    }
    prod=1;
    for(int i=n-1;i>=0;i--)        
    {  
       
      prod=prod*arr[i];
      max_val=max(max_val,prod);
      if(prod==0)
      {
        prod=1;
      }
      if(max_val<arr[i])
      {
        max_val=arr[i];
      }       
        
    }
    cout<<"The maximum subarray product is= "<<max_val<<endl;
    // here 2nd for loop is beacause sometimes we can't get maximum product from 1st for loop by 2nd we can get the max product
    /*
    EX:arr={2,-5,-2,-4,3}
    from 1st max_prod= 20 but
    from 2st max_prod= 24 which the highest from that array
    */
    // Time complexity: O(n) and Space complexity: O(1).
}