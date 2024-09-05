#include<bits/stdc++.h>
using namespace std;
int main()    // method-1
{ 
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        arr.push_back(p);
    }
    sort(arr.begin(),arr.end());   //finding the largest element in  the vector by sort in sorting in ascending order.
    cout<<arr[n-1]<<endl; 
    cout<<arr[n-2]<<endl;          //finding the  second largest element in  the vector by sort in sorting in acsending order, wehen no elements are repeated
    /*int maxi =*max_element(arr.begin(),arr.end()); //finding the largest element in  the vector // method-2
    cout<< maxi;*/
}

int main()  // method-3
{
    int max_val;
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
    for(int i=1;i<n;i++)
    {
      if(arr[i]>max_val)
      {
        max_val=arr[i];
      }
    }
    cout<<"the largest element in the array is = "<<max_val;

}
