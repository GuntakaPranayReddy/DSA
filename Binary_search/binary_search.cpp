#include<bits/stdc++.h>
using namespace std;
/*
int binary_search(vector<int>&v,int target)                               // iterative method
{
  int left=0;
  int right=v.size()-1;
  while(left<=right)
  {
    int mid=(left+right)/2;
    if(v[mid]==target)
    {
        return mid;
    }
    else if(v[mid]<target)
    {
        left=mid+1;
    }
    else
    {
        right=mid-1;
    }
  }
  return -1;
}
*/
int binary_search(vector<int>&v,int left,int right,int target)          // recursion method
{
    if(left>right)
    {
        return -1;
    }
    int mid=(left+right)/2;
    if(v[mid]==target)
    {
        return mid;
    }
    else if(v[mid]<target)
    {
        return binary_search(v,mid+1,right,target);
    }
   
    return binary_search(v,left,mid-1,target);   // this will counted in the else condition
}
int main()
{
    int n,target;
    cout<<" size of the vector is is = ";
    cin>>n;
    cout<<" the targeted element is = ";
    cin>>target;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        v.push_back(p);
    }
   cout<<"the index target value of the number is = "<<binary_search(v,0,n-1,target)<<endl;// for recursive method
  //cout<<"the index target value of the number is = "<<binary_search(v,target)<<endl;  // for iterative method
}