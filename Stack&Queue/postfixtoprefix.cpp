#include<bits/stdc++.h>
using namespace std;
string postfixtoprefix(string exp){
	
	string s="";
	stack<string>st;
	for(int i=0;i<exp.size();i++)
	{
	    char ch=exp[i];
        string s="";
        s=s+ch;         // for the conversion into the string.
		if(isalnum(ch)) //(exp[i]>='0' && exp[i]<='9')||(exp[i]>='a' && exp[i]<='z')||(exp[i]>='A' && exp[i]<='Z')
		{
			st.push(s);
		}
        else           //(ch=='^'||ch=='/'||ch=='*'||ch=='+'||ch=='-')
        {
            string p=""; 
            string op1=st.top();
            st.pop();
            string op2=st.top();
            st.pop();
            p=p+s+op2+op1;  // <operator><2nd top element from stack><1st top element from stack>
            st.push(p);     // pushing above one into the stack
        }
    }  
    return st.top();
}
int main()
{
    string exp;            //ex:"ab+cd-*"
    getline(cin,exp);
    cout<<"the postfix expression is ="<<exp<<endl;
    cout<<"the prefix expression is ="<<postfixtoprefix(exp)<<endl;
    return 0;
}