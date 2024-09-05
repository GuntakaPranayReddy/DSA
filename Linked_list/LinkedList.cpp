#include<bits/stdc++.h>
using namespace std;
struct ListNode
{
    int data;
    ListNode*next;
    ListNode(int data1)
    {
       data=data1;
       next=NULL;
    }
};
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        v.push_back(p);
    }
    ListNode*dummy=new ListNode(0);
    ListNode* current=dummy;
    for(int i=0;i<n;i++)
    {
        current->next=new ListNode(v[i]);
        current=current->next;
    }
    ListNode*head=dummy->next;
    delete dummy;
    ListNode*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

