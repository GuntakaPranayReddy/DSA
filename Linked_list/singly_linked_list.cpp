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
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    ptr->next=head;
    head=ptr;
    cout<<"Node is inserted"<<endl;
}
void insert_end()
{
    int val;
    cout<<"Enter the value = ";
    cin>>val;
    struct node*ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    struct node*temp;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    ptr->next=NULL;
    temp->next=ptr;
    cout<<"Node is inserted"<<endl;
}
void insert_random_position()
{
    int val,loc;
    cout<<"Enter the value =";
    cin>>val;
    cout<<"Enter the location(index) where you needed to insert = ";
    cin>>loc;
    struct node*ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    struct node*temp;
    temp=head;
    for(int i=0;i<loc-1;i++)
    {
        temp=temp->next;
    }
    ptr->next=temp->next;
    temp->next=ptr;
    cout<<"Node is inserted"<<endl;
}
void delete_beginning()
{
    struct node*temp;
    if(head==NULL)
    {
        return;
    }
    else
    {
        temp=head;
        head=temp->next;
        free(temp);
    }  
    cout<<"Node is deleted from beginning.."<<endl;
}
void delete_end()
{
    struct node*temp;
    struct node*temp1;
    if(head==NULL)
    {
        return;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        { 
            temp1=temp;
           temp=temp->next;
        }
        temp1->next=temp->next; // or temp1->next=NULL
        free(temp);
    }  
     cout<<"Node is deleted from last.."<<endl;
}
void delete_random_position()
{
    int loc;
    cout<<"Enter the location(index) where you needed to delete = ";
    cin>>loc;
    struct node*temp;
    struct node*temp1;
    if(head==NULL)
    {
        return;
    }
    else
    {
        temp=head;
        for(int i=0;i<loc;i++)
        { 
            temp1=temp;
            temp=temp->next;
        }
        temp1->next=temp->next;
        free(temp);
    } 
    cout<<"Node is deleted from location = "<<loc<<endl; 
   
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
    temp=head;
    while(temp!=NULL)
    {    
        if(temp->data==val)
        {
            cout<<" THE ELEMENT IS PRESENT IN THE LINKED LIST at location(index) = "<<location<<endl;
            p=1;
            break;
        }
        temp=temp->next;
        location=location+1;
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
    while(temp!=NULL)
    {
       count=count+1;
       temp=temp->next;
    }
    cout<<" THE LENGTH OF THE LINKED LIST IS = "<<count<<endl;
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
    cout<<"THE ELEMENTS PRESENT IN THE LINKED LIST ARE =  ";
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
    while(ch!=11) 
    {
        cout<<endl; 
        cout<<"*********Main Menu*********"<<endl;
        cout<<"Choose one option from the following list ..."<<endl;
        cout<<"1.Insert in beginning\n2.Insert at last\n3.Insert at any random location(index)\n4.Delete from Beginning\n5.Delete from last\n6.Delete node at specified location(index)\n7.Search for an element\n8.length of the linked list\n9.display the elemnets in the linked list\n10.Exit"<<endl;
        cout<<"Enter your choice:";  
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
                insert_random_position();
                break;
            case 4:
                delete_beginning();
                break;
            case 5:
                delete_end();
                break;
            case 6:
                delete_random_position();
                break;
            case 7:
                search_element();
                break;
            case 8:
                linkedlist_length();
                break;
            case 9:
                display();
                break;
            case 10:
                exit(0);
                break;
            default:
                cout << "Please enter a valid choice.." << endl;
        }

    }
}


