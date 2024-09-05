#include<bits/stdc++.h>
using namespace std;
int main()
{
   int num1,num,r,rev_num=0;
     cin >> num;
     num1=num;
     while(num1!=0)
     {

        r=num1%10;
        rev_num =(rev_num*10)+r;
        num1=num1/10;

     } 
     if(num == rev_num)
     {
        cout << "the given number is palindrome"<< endl;
     }
     else
     {
        cout << "the given number is not palindrome"<< endl;
     }
} // Check if a number is Palindrome or Not

