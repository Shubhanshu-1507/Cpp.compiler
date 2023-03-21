#include <iostream>
using namespace std;
struct Node
{
    int data, key;
    struct Node *prev, *next;
};
Node * create(int x);
Node * insert_end(Node *head, int x); // formal parameter
Node * delete_end(Node*head);
Node * insert_beg(Node*head,int x);
Node * delete_beg(Node*head);
Node * search(Node* head, int x);
void insert_after(Node* head,int data, int x);
void rev_show(Node *head);
// bool search(Node* head, int x);
void display(Node*head);

// insert_after function
void insert_after(Node* head,int data, int x)
{
    Node * pos = search(head, x);
    if(!pos)
    {
        cout <<"Node Not found"<<endl;
        return;
    }
    Node *nptr = create(data);
    nptr -> next = pos -> next;
    pos -> next = nptr;
}
Node * create(int x)//node creation
{
Node * nptr = new Node();
nptr -> data=x;
nptr -> next = NULL;
nptr -> prev = NULL; // change 1
return nptr;
}
Node *insert_end(Node*head,int x){//element insertion at end
    Node*nptr=create(x);
    if(!head){
head=nptr;
return head;

    }
Node*t=head;
while(t ->next){
t=t ->next;

}
t ->next=nptr;
nptr -> prev = t;
return head;
}

// delete_beg function 
Node * delete_beg(Node*head)
{
    if(!head){
        cout<<" List empty : No node found to delete ";
        return head;
    }
    if(!(head -> next))
    {
        cout<<"Delete item: "<<head ->data<<endl;
        delete head;
        return NULL;
    }
    cout<<"Delete item: "<<head ->data<<endl;
    Node *t = head;
    head = head->next;
    head -> prev = NULL;
    delete t;
    return head;
}

// delete_end function
Node*delete_end(Node*head){ // last node element deletion
 if(!head){
        cout<<"List empty"<<endl;
        
        return head;
    }

if(!(head -> next)){
cout<<"Deleted item :"<<head ->data<<endl;
delete head;

return NULL;

}
Node*t=head;
while(t->next->next){
    t=t->next;
}
cout<<"Deleted item :"<<t->next->data<<endl;

delete t->next;
t->next=NULL;
return head;
}

// insert_beg function 
Node * insert_beg(Node*head,int x){
         Node*nptr=create(x);
        nptr ->next=head;
        head=nptr;
        return head;
}
void rev_show(Node *head)
{
    if(head)
    {
        rev_show(head->next);
        cout<<head->data<<" ";
    }
}

//display function
void display(Node*head){
    if(!head){
        cout<<"List empty"<<endl;
        
        return;
    }
    while(head){
        cout<<head -> data<<" ";
       // cout<<endl;
        head=head ->next;
    }cout<<endl;//it was mistakenly not written//it will change line for every additional row elements
}
// search function
Node * search(Node* head, int x)
{
    while(head)
        {
            if(head -> data == x)
                return head;
            head = head -> next;
        }
        return NULL;
}
// alternate search function 
/*
bool search(Node* head, int x)
Node* current = head; // Initialize current
    while (current != NULL) {
        if (current->key == x)
            return true;
        current = current->next;
    }
    return false;
}
*/


int main()
{
    Node *head = NULL;
   // insert_end(head, 10); // actual parameter
//    head=insert_end(head,10);
 //   display(head);
    // head=insert_end(head,20);
    // display(head);
    // head=insert_end(head,30);
    // display(head);
    // head=insert_end(head,40);
    // display(head);
    // head=delete_end(head);
    // display(head);
    head=insert_beg(head,5);
    display(head);
    head=insert_beg(head,15);
    display(head);
    head=insert_beg(head,25);
    display(head);
    head=insert_beg(head,35);
    display(head);
    head=insert_beg(head,65);
    display(head);
    head=insert_beg(head,75);
    display(head);
    head=insert_end(head,60);
    display(head);
    insert_after(head,45,60);
    display(head);
    insert_after(head,45,60);
    display(head);
        
    head=delete_end(head);
    display(head);
    head=delete_end(head);
    display(head);
    head=delete_end(head);
    display(head);
    

    head=delete_beg(head);
    display(head);
    head=delete_beg(head);
    display(head);
    head=delete_beg(head);
    display(head);

    rev_show(head);
    Node * pos = search(head,25);
    if(!pos){
        cout <<"Node Not found";
    }
    else {
        cout << "Node found : "<< head->data<<endl;
        }
    return 0;
}