## DSA 
###
Greek Letters
αA
$\alpha A$	νN
$\nu N$
βB
$\beta B$	ξΞ
$\xi\Xi$
γΓ
$\gamma \Gamma$	oO
$o O$ (omicron)
δΔ
$\delta \Delta$	πΠ
$\pi \Pi$
ϵεE
$\epsilon \varepsilon E$	ρϱP
$\rho\varrho P$
ζZ
$\zeta Z \sigma \,\!$	Σ
$\sigma \Sigma$
ηH
$\eta H$	τT
$\tau T$
θϑΘ
$\theta \vartheta \Theta$	υΥ
$\upsilon \Upsilon$
ιI
$\iota I$	ϕφΦ
$\phi \varphi \Phi$
κK
$\kappa K$	χX
$\chi X$
λΛ
$\lambda \Lambda$	ψΨ
$\psi \Psi$
μM
$\mu M$	ω Ω
$\omega \Omega$

### Exception handling
```
try
{
    // code to be executed
}
catch
{
    // code to be executed
}
throw
{
    // code to be executed
}
```
### final vs finally vs finalized ( constant -/ block- / function- )
---
### Exception propagation 

### Asymptotic Notation 
- Types of Asymptotic notation :-
    - 1) Upper bound : Big O(n)
    - 2) Lower bound : Omega Ω(n)
      3) Exact Bound : Theta θ (n)
      4) Strict upper bound : small o(n)
      5) Strict lower bound : small omega o(n)
---
## GP series  & Time complexity  :
- ```
  for (i=1;i<=n;i*=2)
  {
    for(j=1;j<=i;j++)
    {
        cout<<"hi";
    }
  }
  // Time complexity : n
---
## Recursion and Iteration : 
### 1 : Palindrome 5432112345 // double order recursion
```
#include<iostream>
using namespace std;
void print(int n)
{
  if(n>0){
    cout<<n;
    print(n-1);
    cout<<n;
    
  }
}
int main(){
  print(5);
  return 0;
  
}
```
### 2 : Palindrome 1213121 // double order recursion
```
#include<iostream>
using namespace std;
void print(int n)
{
  if(n>0){
    print(n-1);
    cout<<n;
    print(n-1);
    
  }
}
int main(){
  print(n);
  return 0;
  
}
```
```
#include<iostream>
using namespace std;
int sum (int n)
{
    if(n==1 /* n==0 */)
        return n;
    return n + sum ( n-1);
}
int main()
{  
  int sum = 1,n;
  cin >> n;
  sum(n);
  return 0;
}
```
```
#include<iostream>
using namespace std;
int sum (int n)
{
    if(n==1) {/* n==0 */
        return n;}
    return n + sum ( n-1);
}
int main()
{  
  //cin >> n;
  sum(10);
  return 0;
}
```
## Recurrence relation 
```
void fun(int n )
{
    if(n>0)
    {
        fun(n-1);
        cout<<n;
    }
}
```
## Bubble Sort :
```
for(i=1;i<n;i++)
{ flag=0;
  for(j=0;j<n-1;j++)
   {
      if(a[i]>a[j+1])
      swap(a[j],a[j+1]);
      flag=1;
   }
}if (flag==0)
break;
}
```
## Linkedlist
```
#include<iostream>
using namespace std;
struct Node 
{
     int data;
     struct Node *next; // self-referential structure

};
Node* insert_end(Node* head, int x) // formal parameter
{
Node* nptr = create(x);

if(!head)
{
    head = nptr;
    return head;    
}
Node* t = head;
while(t -> next)
{
     t = t -> next;   
}
t -> next = nptr;
return head;
}
void display(Node* head)
{
    if(!head)
    {
        cout<<"List empty"<<endl;
        return;
    }
    while()
    {
        cout << head -> data << " ";
        head = head ->next;
    }
}
int main()
{
    Node *head = Null;
    insert_end(head , 10);  // acctual parameter
}
Node* create(int x)
{
    Node* nptr = new Node();
    nptr -> data = x;
    nptr -> next = Null;
    return nptr;
}

```
 Linkedlist // Modified
```
#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
Node * create(int x);
Node * insert_end(Node *head, int x); // formal parameter
Node * delete_end(Node*head);
Node * insert_beg(Node*head,int x);
void display(Node*head);


int main()
{
    Node *head = NULL;
   // insert_end(head, 10); // actual parameter
    head=insert_end(head,10);
    display(head);
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


}


Node * create(int x)//node creation
{
Node * nptr = new Node();
nptr -> data=x;
nptr -> next=NULL;
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

}t ->next=nptr;
return head;
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
Node*delete_end(Node*head){//node last element deletion


 if(!head){
        cout<<"List empty"<<endl;
        
        return head;
    }

if(!(head -> next)){
cout<<"No Node found to delete "<<endl;
delete head;
return NULL;

}
Node*t=head;
while(t->next->next){
    t=t->next;
}
cout<<"Deleted item :"<<head ->data<<endl;

delete t->next;
t->next=NULL;
return head;
}
Node * insert_beg(Node*head,int x){
         Node*nptr=create(x);
        nptr ->next=head;
        head=nptr;
        return head;


}

```
## Singly LinkedList
```
#include <iostream>
using namespace std;
struct Node
{
    int data, key;
    struct Node *next;
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
nptr -> next=NULL;
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

}t ->next=nptr;
return head;
}
// delete_beg function 
Node * delete_beg(Node*head)
{
    if(!head){
        cout<<" List empty : No node found to delete ";
        return head;
    }
    cout<<"Delete item: "<<head ->data<<endl;
    Node *t = head;
    head = head->next;
    delete t;
    return head;
    /*
     if(!(head -> next))
    {
        cout << head -> data;
        delete head;
        return NULL;
    }
    */
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
    head=insert_end(head,60);
    display(head);
    insert_after(head,45,60);
    display(head);
        /*
    head=delete_end(head);
    display(head);
    head=delete_end(head);
    display(head);
    head=delete_end(head);
    display(head);
    */
/*
    head=delete_beg(head);
    display(head);
    head=delete_beg(head);
    display(head);
    head=delete_beg(head);
    display(head);
*/
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

```
## Doubly LinkedList
```
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
    head=insert_end(head,60);
    display(head);
    insert_after(head,45,60);
    display(head);
        /*
    head=delete_end(head);
    display(head);
    head=delete_end(head);
    display(head);
    head=delete_end(head);
    display(head);
    */
/*
    head=delete_beg(head);
    display(head);
    head=delete_beg(head);
    display(head);
    head=delete_beg(head);
    display(head);
*/
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
```