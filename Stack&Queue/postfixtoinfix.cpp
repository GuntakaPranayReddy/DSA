#include<bits/stdc++.h>
using namespace std;
string postfixtoinfix(string exp){
	
	string s="";
	stack<string>st;
	for(int i=0;i<exp.size();i++)
	{
	    char ch=exp[i];
        string s="";
        s=s+ch; // for the conversion into the string.
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
            p=p+'('+op2+s+op1+')'; // <2nd top element from stack><operator><1st top element from stack>
            st.push(p);    //  pushing above one into the stack
        }
    }  
    return st.top();
}
int main()
{
    string exp;             //ex:ab*c+
    getline(cin,exp);
    cout<<"the postfix expression is ="<<exp<<endl;
    cout<<"the infix expression is ="<<postfixtoinfix(exp)<<endl;
    return 0;
}