#include<bits/stdc++.h>
using namespace std;
void printnameNtimes(int i,int n)
{
    
    if(i>n)
    {
        return;
    }
    cout<<"pranay"<<endl;
    printnameNtimes(i+1,n);
}
int main()
{
  int n;
  cin>>n;
  printnameNtimes(1,n);
}