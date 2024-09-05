#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp=-1;
    cin >> n;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i == 0)
        {
            temp=0;
            break;
        }
        else
        {
            i++;
            
        }
    }
    if(temp == 0)
    {
        cout << n <<" is a not prime number" << endl;
    }
    else
    {
       cout << n <<" is a prime number" << endl; 
    }
} // Check if a number is prime or not