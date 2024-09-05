/*
=>It follows FIFO order (FIRST IN FIRST OUT).
=>The storage requirement of linked representation of a queue with n elements is o(n) while the time requirement for operations is o(1).
=>In a linked queue, each node of the queue consists of two parts i.e. data part and the link part. 
=>Each element of the queue points to its immediate next element in the memory.
=>In the linked queue, there are two pointers maintained in the memory i.e. front pointer and rear pointer.
=>The front pointer contains the address of the starting element of the queue while the rear pointer contains the address of the last element of the queue.
*/
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node*next;
};
struct node *front;
struct node *rear;
// Here front, rear are the pointers.In which "front" stores starting element address and "rear" stores ending element address. 
// here always rear->next=NULL.
void inserting()
{
    int val;
    cout<<"Enter the value =";
    cin>>val;
    struct node*ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    if(front==NULL) // (or) rear==NULL
    { 
        front=ptr;
        rear=ptr;
        front->next=NULL;
        rear->next=NULL;
    }
    else
    {
        rear->next=ptr;
        rear=ptr;
        rear->next=NULL;
    }
    cout<<"Node is inserted"<<endl;
}
void deleting()
{
    if(rear==NULL)   // (or) front==NULL
    {
        return;
    }
    else
    {
        front=front->next;
    }
    cout<<"Node is deleted"<<endl;
}
void display()
{
   struct node *temp;
   temp=front;
   if(temp==NULL)
   {
    cout<<"EMPTY QUEUE"<<endl;
   }
   else
   {
    cout<<"THE  ELEMENTS PRESENT IN THE QUEUE ARE =  ";
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
        cout<<"*********Queue_implementation_using_linkedlist*********"<<endl;
        cout<<"Choose one option from the following list ..."<<endl;
        cout<<"1.pushing element into queue\n2.poping element from the queue\n3.display the elements in the queue\n4.Exit"<<endl;
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
