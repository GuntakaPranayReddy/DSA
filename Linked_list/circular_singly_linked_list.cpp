#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node*next;
};
struct node *head;
void insert_beginning()
{
    int val;
    cout<<"Enter the value =";
    cin>>val;
    struct node*ptr;
    struct node*temp;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    if(head==NULL)
    {
        head=ptr;
        ptr->next=head;
    }
    else
    {
        temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        ptr->next=head;
        temp->next=ptr;
        head=ptr;
    }
    cout<<"Node is inserted"<<endl;
}
void insert_end()
{
    int val;
    cout<<"Enter the value = ";
    cin>>val;
    struct node*ptr;
    struct node*temp;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    if(head==NULL)
    {
        head=ptr;
        ptr->next=head;
    }
    else
    {
        temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->next=head;
    }
    cout<<"Node is inserted"<<endl;
}
void delete_beginning()
{
    if(head==NULL)
    {
        return;
    }
    else if(head->next==head)
    {
        free(head);
        head=NULL;
    }
    else
    {
        struct node*temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=head->next;
        free(head); // clearing the address in head and making it clear
        head=temp->next;
    }  
    cout<<"Node is deleted from beginning.."<<endl;
}
void delete_end()
{
    if(head==NULL)
    {
        return;
    }
    else if(head->next==head)
    {
        free(head);
        head=NULL;   
    }
    else
    {
        struct node*temp=head;
        struct node*temp1=NULL;
        while(temp->next!=head)
        { 
            temp1=temp;
           temp=temp->next;
        }
        temp1->next=head;  // (or) tenmp1->next=temp->next;
        free(temp);
    }  
    cout<<"Node is deleted from last.."<<endl;
}
void search_element()
{
    int val,location=0;
    cout<<"Enter the value =";
    cin>>val;
    int p=0; 
    struct node *temp;
    if(head==NULL)
    {
        cout<<"LINKED LIST IS EMPTY AND THERE IS NOT ELEMENT IS THERE TO SEARCH"<<endl;
    }
    else
    {
        temp=head;
        do
        {    
            if(temp->data==val)
            {
                cout<<" THE ELEMENT IS PRESENT IN THE LINKED LIST at location(index) = "<<location<<endl;
                p=1;
            }
            temp=temp->next;
            location=location+1;
    }while(temp!=head);
    }
    if(p!=1)
    {
        cout<<" THE ELEMENT IS NOT PRESENT IN THE LINKED LIST at any location(index)"<<endl;
    }  
}
void linkedlist_length()
{  
   int count=0;
   struct node *temp;
   temp=head;
   if(head==NULL)
   {
    cout<<" THE LENGTH OF THE LINKED LIST IS = "<<count<<endl;
   }
   else
   {
    while(temp->next!=head)
    {
       count=count+1;
       temp=temp->next;
    }
    count=count+1; // Counting the last node
    cout<<" THE LENGTH OF THE LINKED LIST IS = "<<count<<endl;
   }
}
void display()
{
   struct node *temp;
   temp=head;
   if(head==NULL)
   {
    cout<<"THE IS NO ELEMENT PRESENT IN THE LINKED LIST "<<endl;
   }
   else
   {
    cout<<"THE  ELEMENTS PRESENT IN THE LINKED LIST ARE =  ";
    while(temp->next!=head)
    {
        cout<<temp->data<<" ";  // to display the elements
        temp=temp->next;
    }
    cout<<temp->data<<" "; // displaying last element 
    cout<<endl;
   }
   
}
int main()
{
    int ch;
    while(ch!=8)
    {
        cout<<endl; 
        cout<<"*********Main Menu*********"<<endl;
        cout<<"Choose one option from the following list ..."<<endl;
        cout<<"1.Insert at beginning\n2.Insert at last\n3.Delete from Beginning\n4.Delete from last\n5.Search for an element\n6.length of the linked list\n7.display the elements in the linked list\n8.Exit"<<endl;
        cout<<"Enter your choice: ";  
        cin>>ch;
        switch(ch)
        {
            case 1:
                insert_beginning();
                break;
            case 2:
                insert_end();
                break;
            case 3:
                delete_beginning();
                break;
            case 4:
                delete_end();
                break;
            case 5:
                search_element();
                break;
            case 6:
                linkedlist_length();
                break;
            case 7:
                display();
                break;
            case 8:
                exit(0);
                break;
            default:
                cout << "Please enter a valid choice.." << endl;
        }

    }
}


