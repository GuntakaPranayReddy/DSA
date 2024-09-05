/*
-> Here stack follows LIFO order(Last in First Out).
-> inserting function is just like insert from beginning of singly linked list.
-> deleting function is just like delete from beginning of singly linked list.
-> here the time complexity for push and pop is O(1).
-> to get top/peek element just extract head->data then we get required value when stack is non empty,if stack is empty then the top/peek element is NULL.
*/
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node*next;
};
struct node*head;
void inserting()                           
{
    int val;
    cout<<"Enter the value =";
    cin>>val;
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    ptr->next=head;
    head=ptr;
    cout<<" Node is inserted "<<endl;
}
void deleting()
{
    if(head==NULL)
    {
        return;
    }
    else
    {
        head=head->next;
    }
    cout<<" Node is deleted "<<endl;
}
void display()
{
    struct node*temp=head;
    if(temp==NULL)
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        cout<<"THE  ELEMENTS PRESENT IN THE STACK ARE =  ";
        while(temp!= NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
}
int main()
{
    int ch;
    while(ch!=4)
    {
        cout<<endl; 
        cout<<"*********Stack_implementation_using_linkedlist*********"<<endl;
        cout<<"Choose one option from the following list ..."<<endl;
        cout<<"1.pushing element into stack\n2.poping element from the stack\n3.display the elements in the stack\n4.Exit"<<endl;
        cout<<"Enter your choice:";  
        cin>>ch;
        switch(ch)
        {
            case 1:
                inserting();
                break;
            case 2:
                deleting();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break; 
            default:
                cout << "Please enter a valid choice.." << endl;
        }

    }
}
