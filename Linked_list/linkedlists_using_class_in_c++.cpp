class node {           // for singly linked list(syntax when you using class)
public:
    int data;
    node*next;
    node(int data1, node* next1) { // constructors
        data = data1;
        next = next1;
    }
    node(int data1) {
        data = data1;
        next = nullptr;
    }
};
node *head = nullptr; 
/* 
For creating a new node the syntax is
node* newnode=new node(value,next_address);
    (or)
node* newnode=new node(value);
newnode->next=next_address;
*/

class node {         // for doubly linked list(syntax when you using class)
public:
    int data;
    node*next;
    node*prev;
    node(int data1, node* next1,node* prev1) { // constructors
        data = data1;
        next = next1;
        prev = prev1;
    }
    node(int data1) {
        data = data1;
        next = nullptr;
        prev =nullptr;  // We can NULL (or) nullptr
    }
};
node *head = nullptr; 
/* 
For creating a new node the syntax is
node* newnode=new node(prev_address,value,next_address);
    (or)
node* newnode=new node(value);
newnode->prev=prev_address;
newnode->next=next_address;
*/

