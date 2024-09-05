#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,n1;
    cin >> n;
    n1=n;
    while(n1>0)
    {
       n=n1/10;
        count=count+1;
        n1=n;
    }
    cout<<count<<endl;
} //Count digits in a number








