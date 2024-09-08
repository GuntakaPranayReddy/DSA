#include<bits/stdc++.h>
using namespace std;
/*
int main()                                                       // method-1
{
    int n;
    cin>>n;
    vector<int>arr;
    int count=0;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        arr.push_back(p);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                count++;
            }
        }
    }
    cout<<"The number of inversions are= "<<count<<endl;
}
// Time complexity O(n^2) and Space complexity O(1).
*/
int ms(vector<int>&arr,int low,int mid,int high)                  //  method-2(preferred method as above one is brute force method) using mergesort
{
    int left=low;
    int right=mid+1;
    vector<int>temp;
    while(left<=mid && right<=high)
    {
        if(arr[left]<=arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid)
    {
        temp.push_back(arr[left]);
        left++; 
    }
    while(right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++)
    {
       arr[i]=temp[i-low];
    }
}
int countpairs(vector<int> &arr, int low, int mid, int high) 
{
    int right = mid + 1;
    int cnt = 0;
    for (int i = low; i <= mid; i++) 
    {
        while (right <= high && arr[i] > arr[right]) right++;
        cnt += (right - (mid + 1));
    }
    return cnt;
}
int merge_sort(vector<int>&arr,int low,int high)
{
    if(low>=high)
    {
        return 0;
    }
    int mid=(low+high)/2;
    int cnt1=merge_sort(arr,low,mid);
    int cnt2=merge_sort(arr,mid+1,high);
    int cnt3=countpairs(arr,low,mid,high);
    ms(arr,low,mid,high);
    return cnt1+cnt2+cnt3;
}
int numberOfInversions(vector<int>&arr, int n)
{
   return merge_sort(arr,0,n-1);
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        arr.push_back(p);
    }
    int count= numberOfInversions(arr,n);
    cout<<"The number of inversions are= "<<count<<endl;
}
// Time complexity O(nlogn) and Space complexity O(n).
