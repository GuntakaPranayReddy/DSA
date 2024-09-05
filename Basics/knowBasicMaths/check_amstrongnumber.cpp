#include<bits/stdc++.h>
using namespace std;
int main()
{ 
     int n,r,p,num,amg_num=0;
     cin >> n;
     num=n;
     while(n!=0)
     {
        r=n%10;
        p= pow(r,3);
        amg_num = amg_num +p;
        n=n/10;

     }
     if( amg_num == num)
     {
        cout << "Yes, it is an Armstrong Number"<< endl;
     }
     else
     {
        cout << "No, it is not an Armstrong Number"<< endl;
     }

} // Check if a number is Armstrong Number or not
