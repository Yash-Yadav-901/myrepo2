//Ques 1: Define a car class with properties brand name , model, engine, number of seats and method displayInfo that display the all information of class.
#include <iostream>
#include <string>
using namespace std;
class car{
    public: 
    string name;
    int model;
    char engine;
    int seats;
    car( string name,int model, char engine ,int seats){
        this->name=name;
        this->model=model;
        this->engine=engine;
        this->seats=seats;
    }

    void displayInfo(){
        cout<<name<<endl;
        cout<<model<<endl;
        cout<<engine<<endl;
        cout<<seats;
    }

};
int main(){
    car c1("Tesla",1001,'X', 4);
    c1.displayInfo();
}


//Ques 2: Write a program that defines a Rectangle class with a copy constructor?
class Rectangle{
    public:
    int height;
    int width;

    Rectangle(int w, int h){
        width=w;
        height=h;
    }

    Rectangle(const Rectangle &rec){
        width=rec.width;
        height=rec.height;
    }

    void display(){
        cout<<"width: "<<width<<endl;
        cout<<"hight: "<<height<<endl;
    }
    
};
int main(){
    Rectangle rec1(100,10);
    rec1.display();
    Rectangle rec2=rec1;
    rec2.display();
    
}


