#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2,num,k;
    cin>> num1>>num2;
    if(num1>num2)
    {
        k=num1;
        num1=num2;
        num2=k;

    }
    while( num2%num1 !=0 )
    {
        num=num1;
        num1=num2%num1;
        num2=num;
    }
    if(num2%num1==0 )
    {
        cout << num1<< endl;
    }
    
}//Find GCD of two numbers

