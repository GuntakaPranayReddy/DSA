#include<bits/stdc++.h>
using namespace std;
int prec(char c)
{
	if(c=='^')
	{
		return 3;
	}
	else if(c=='*'|| c=='/')
	{
		return 2;
	}
    else if(c=='+'|| c=='-')
	{
		return 1;
	}
	return -1;
}
string infixtopostfix(string exp){
	
	string s="";
	stack<char>st;
	for(int i=0;i<exp.size();i++)
	{
	    char ch=exp[i];
		if(isalnum(ch)) //(exp[i]>='0' && exp[i]<='9')||(exp[i]>='a' && exp[i]<='z')||(exp[i]>='A' && exp[i]<='Z')
		{
			s=s+ch;
		}
       else if(ch=='(')
		{
			st.push(ch);
		}
		else if(ch==')')
		{
			while(!st.empty() && st.top()!='(')
			{
				s=s+st.top();
				st.pop();
			}
			if(!st.empty() && st.top()=='(')
			{
				st.pop();
			}
		}
		else                  //(ch='^'||ch=='/'||ch=='*'||ch=='+'||ch=='-')
		{
			while(!st.empty() && prec(ch)<=prec(st.top()))  // if incoming operator has lower precedence or equal precedence to the top element then remove the top element until incomming operator should having higher precendence than the top element.
			{
				s=s+st.top();
				st.pop();
			}
		   st.push(ch);                 
		}
	}
	while(!st.empty())
	{
        s=s+st.top();
		st.pop();
	}
  return s;
}
int main()
{
    string exp;        // ex:"a+b*(c^d-e)^(f+g*h)-i"
    getline(cin,exp);
    cout<<"the infix expression is ="<<exp<<endl;
    cout<<"the postfix expression is ="<<infixtopostfix(exp)<<endl;
    return 0;
}