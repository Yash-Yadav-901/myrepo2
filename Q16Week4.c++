//Ques 1: Write a C++ code that take linked list from user input that is in sorted order and a value integer. Now insert the value inside linkedlist such that new likedlist is also in sorted order. Sample Input:- 10->20->30->40 value =25 Sample Output:- 10->20->25->30->40
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

class linkedlist{
    public:
    node* head;
    int size;
    linkedlist(){
        head=NULL;
        size=0;
    }

    void inserts(int val){
        node* temp=new node(val);
        if(size==0){
            temp->next=head;
            head=temp;
            
        }
        else{
            node* t=head;
            while(t->next!=NULL){
                t=t->next;
            }
            t->next=temp; 
        }
        size++;
    }

    void del(int val){
       if(size==0){
        return;
       }
        node* temp=new node(val);
       if(head->val>val){
        temp->next=head;
        head=temp;
        size++;
        return;
       }
       node* t=head;
       while(t->next!=NULL){
        if(t->val<=val && t->next->val>=val){
            temp->next=t->next;
            t->next=temp;
            return;
        }
        t=t->next;
       }
        if(t->next==NULL){
            t->next=temp;
        }
        size++;
    }
    
    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        
    }

};

int main(){
    linkedlist ll;
    int ch;
    int val;
    do{
        cout<<"choose: ";
        cin>>ch;
        switch(ch){
            case 1:
            cout<<"insert val: ";
            cin>>val; ll.inserts(val); 
            break;

            case 2:
            cout<<"new val: ";
            cin>>val; ll.del(val); 
            break;
            
            case 3:
            cout<<"size: "<<ll.size; 
            break;
            
            case 4:
            ll.display(); break;
            default:
            cout<<"invalid";
             break;

        }
    }while(ch!=0);

}