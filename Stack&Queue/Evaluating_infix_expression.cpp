#include<bits/stdc++.h>
using namespace std;
int precedence(char ch)
{
    if(ch=='^')
    {
        return 3;
    }
    else if(ch=='/' || ch=='*')
    {
        return 2;
    }
    else if(ch=='+' || ch=='-')
    {
        return 1;
    }
    else
    {
        return 0; //when '(' is the top of the stack.
    }
}
int value(stack<int> &operands,stack<char> &operators)
{
    int b=operands.top();
    operands.pop();
    int a=operands.top();
    operands.pop();
    char c=operators.top();
    operators.pop();
    if(c=='+')
    {
        return a+b;
    }
    else if(c=='-')
    {
        return a-b;
    }
    else if(c=='*')
    {
        return a*b;
    }
    else if(c=='/')
    {
        return a/b;
    }
    else if(c=='^')
    {
        return pow(a,b);
    }
    else
    {
        return 0;   
    }
}
int evaluateinfix(string &exp)
{
    stack<int>operands;
    stack<char>operators;
   for(int i=0;i<exp.size();i++)
   {
    char ch=exp[i];
    if(ch=='(')
    {
        operators.push(ch);
    }
    else if(ch>='0' && ch<='9')
    {
        int nums=0;
        while(i<exp.size() && exp[i]>='0' && exp[i]<='9')
        {
            nums=(nums*10)+(exp[i]-'0');
            i++;
        }
        i--; // to get back to the last position of the number
        operands.push(nums);
    }
    else if(ch==')')
    {
        while(operators.top()!='(')
        {
           int x=value(operands,operators);
            operands.push(x);
        }
       operators.pop(); 
    }
    else 
    {
        while(!operators.empty() && precedence(ch)<=precedence(operators.top()))
        {
            int y=value(operands,operators);
            operands.push(y);
        }
        operators.push(ch);
    }
   }
   while(!operators.empty())
   {
       int z=value(operands,operators);
        operands.push(z);
   }
   return operands.top();
}
int main()
{
    string exp;
    cout<<"the Infix expression= ";
    getline(cin,exp);
    cout<<"After Evaluating the Infix expression"<<endl;
    int ans=evaluateinfix(exp);
    cout<<"Answer = "<<ans<<endl;

}