//Ques 1 : Write a function void printLinkedList(Node* head) that traverses a singly linked list and prints each element's value. Input: A linked list with elements 10 -> 20 -> 30 -> 40
#include <iostream>
using namespace std;
class node{
    public:
    int val;
    node* next;
    node(int val){
        this->val=val;
        next=NULL;
    }
};
/*void printLinkedList(node *head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main(){
    node* a=new node(10);
    node* b=new node(20);
    node* c=new node(30);
    node* d=new node(40);

    a->next=b;
    b->next=c;
    c->next=d;

    printLinkedList(a);
    
    
}
*/

//Ques 2: Write a function void insertAtEnd(Node*& head, int data) that inserts a new node with the given data at the end of a singly linked list. nput: A linked list with elements 10 -> 20 -> 30, and a new data 40

void printLinkedList(node *head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    
}

void insertAtEnd(node* head, int data){
    node* t=head;
    node* node1=new node(data);
    while(t!=NULL){
        cout<<t->val;
        t=t->next;
    }
    

    t->next=node1;
    
}


int main(){
    node* a1=new node(10);
    node* b2=new node(20);
    node* c3=new node(30);
    

    a1->next=b2;
    b2->next=c3;
   

   insertAtEnd(a1,40);

    printLinkedList(a1);
    
}

