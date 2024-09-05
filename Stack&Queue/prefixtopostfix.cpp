#include<bits/stdc++.h>
using namespace std;
string prefixtopostfix(string exp){
	
	string s="";
	stack<string>st;
	for(int i=0;i<exp.size();i++)
	{
	    char ch=exp[i];
        string s="";
        s=s+ch;
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
            p=p+op1+op2+s; // <1st topelement from stack><2nd topelement from stack><operator>
            st.push(p);    //  pushing above one into the stack
        }
    }  
    return st.top();
}
int main()
{
    string exp;                          //ex:*-a/bc-/akl
    getline(cin,exp);
    cout<<"the prefix expression is ="<<exp<<endl;
    reverse(exp.begin(),exp.end()); //reversing the prefix expression
    cout<<"the reversed prefix expression is ="<<exp<<endl;
    cout<<"the postfix expression is ="<<prefixtopostfix(exp)<<endl;
    return 0;
}