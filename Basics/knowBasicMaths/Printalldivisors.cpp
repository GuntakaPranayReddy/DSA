#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if(n%i == 0)
        {
            cout<<i<<",";
        }
    }
    cout<<n<< endl;
} // Print all Divisors of a given Number