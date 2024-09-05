#include<bits/stdc++.h>
using namespace std;
int linear_search(int n,int arr[],int num)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
           return i;
           break;
        }
        else
        {
            return -1;
        }
    }
}
int main()
{
   int n,num;
   cin>>n;
   cin>>num;
   int arr[n];
   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
   }
   for(int i=0;i<n;i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;
   cout<<"The index is = "<<linear_search(n,arr,num)<<endl;

}
// time complexity of the linear search is O(n) and space complexity is O(n) (because it only ever consumes space for 1 pointer ( array ) and 4 integers ( length , value , location , i ))