#include<bits/stdc++.h>
using namespace std;
int main()
{ 
     int n,r,rev_num=0;
     cin >> n;
     while(n!=0)
     {
        r=n%10;
        rev_num =(rev_num*10)+r;
        n=n/10;

     }
     cout<<rev_num<<endl;

} // Reverse a number