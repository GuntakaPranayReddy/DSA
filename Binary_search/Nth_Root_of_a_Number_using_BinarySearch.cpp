#include<bits/stdc++.h>
using namespace std;
int main()
{
   float n,m;
   cin>>m;    // value
   cin>>n;  // nth root
   float p= pow(m,1/n);
   int q=pow(m,1/n);
   if(p==q)
   {
     cout<<p<<endl;
   }
   else
   {
     cout<<-1<<endl;
   }
    //time complexity O(log m) and space complexity O(1).

}