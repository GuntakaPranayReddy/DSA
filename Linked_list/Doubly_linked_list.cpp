#include<bits/stdc++.h>
using namespace std;
struct node
{
    struct node*prev;
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
    if(head==NULL)
    {
        ptr->prev=NULL;
        ptr->next=NULL;
        head=ptr;
    }
    else
    {   ptr->prev=NULL;
        ptr->next=head;
        head->prev=ptr;
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
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    if(head==NULL)
    {
        ptr->prev=NULL;
        ptr->next=NULL;
        head=ptr;
    }
    else
    {
        struct node*temp;
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->prev=temp;
        ptr->next=NULL;
    }
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
    ptr->prev=temp;
    temp->next=ptr;
    (ptr->next)->prev=ptr;
    cout<<"Node is inserted"<<endl;
}
void delete_beginning()
{
    struct node*temp;
    if(head==NULL)
    {
        return;
    }
    else if(head->next==NULL)
    {
        free(head);
        head==NULL;
    }
    else
    {
        temp=head;
        head=temp->next;
        head->prev=NULL;    
        free(temp);
    }  
    cout<<"Node is deleted from beginning.."<<endl;
}
void delete_end()
{
    struct node*temp;
    if(head==NULL)
    {
        return;
    }
    else if(head->next==NULL)
    {
        free(head);
        head==NULL;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        { 
           temp=temp->next;
        }
        (temp->prev)->next=temp->next;  // (or) (temp->prev)->next=NULL;
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
    if(head==NULL)
    {
        return;
    }
    else
    {
        temp=head;
        for(int i=0;i<loc;i++)
        { 
            temp=temp->next;
        }
        (temp->prev)->next=temp->next;
        (temp->next)->prev=temp->prev;
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
   if(head==NULL)
   {
    cout<<" THE LENGTH OF THE LINKED LIST IS = "<<count<<endl;
   }
   else
   {
    while(temp!=NULL)
    {
       count=count+1;
       temp=temp->next;
    }
    cout<<" THE LENGTH OF THE LINKED LIST IS = "<<count<<endl;
   }
}
void reverse_linkedlist()          // reversing the Doubly linked list
{
    struct node*temp=head;
    struct node*temp1=NULL;
    if(head==NULL|| head->next==NULL)
    {
        return;
    }
    else
    {
        while(temp!=NULL)
        {
            swap(temp->prev,temp->next);  //for reversing the linked list
            temp1=temp; // used to storing the last node address
            temp=temp->prev;
        } 
        head=temp1;  // assigning the last node address to head so that it can traverse.
    }
    cout<<"Linked list is reversed"<<endl;
} // after performing this for first time,if you need prevoius order then again reverse it,so you can get previous ones(as usual).
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
    while(ch!=12)
    {
        cout<<endl; 
        cout<<"*********Main Menu*********"<<endl;
        cout<<"Choose one option from the following list ..."<<endl;
        cout<<"1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete node after specified location\n7.Search for an element\n8.length of the linked list\n9.Reversing of the linked list\n10.diplay the elements in the linked list\n11.Exit"<<endl;
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
                reverse_linkedlist();
                break;
            case 10:
                display();
                break;
            case 11:
                exit(0);
                break;
            default:
                cout << "Please enter a valid choice.." << endl;
        }

    }
}


