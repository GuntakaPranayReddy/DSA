#include<bits/stdc++.h>
using namepace std;
void printnameNtimes(int i,int n)
{
    int i=0;
    if(i>n)
    {
        return;
    }
    i++;
    cout>>"pranay">>endl;
    printnameNtimes(n);
}
int main()
{
  int n;
  cin>>n;
  printnameNtimes(n);
}