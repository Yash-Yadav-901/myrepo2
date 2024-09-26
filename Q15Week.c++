//Ques 1: Write a program that defines a Student class and uses the this pointer in a member function to display the student's details.
#include <iostream>
using namespace std;
class student{
    public:
    int id;
    int roll;
    student(int id , int roll){
        this->id=id;
        this->roll=roll;
    }

    void display(){
        cout<<"id: "<<id<<endl;
        cout<<"roll: "<<roll;
    }

};
int main(){
    student s1(1001,90);
    s1.display();

}



//Ques 2: Write a C++ code that take linked list from user input and a value integer . Delete the value from the linkedlist. Sample Input :- 10->20->30->40 value = 20 Sample Output :- 10->30->40?
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
            cout<<"list is empty";
            return;
        }
        if(head->val==val){
            head=head->next;
            size--;
            return;
        }
            node* temp=head;
            while(temp!=NULL){
                if(temp->next->val==val){
                    temp->next=temp->next->next;
                    size--;
                    return;
                }
                temp=temp->next;
            }
            
            if(temp==NULL){
                return;
            }
        size--;

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
            cout<<"delete val: ";
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