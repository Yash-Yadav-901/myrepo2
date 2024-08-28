//Day - 04 Questions - Week-02 (August 20th, 2024)

//Ques:01: Write a C++ program that takes two integers as input and performs the following arithmetic operations:
/*Addition
Subtraction
Multiplication
Division (ensure that you handle division by zero)
Modulus*/

#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first integer: ";
    cin>>a;
    cout<<"Enter second integer: ";
    cin>>b;

    cout<<"Addition: "<<a+b<<endl;

    cout<<"Subtraction: "<<a-b<<endl;

    cout<<"Multiplication: "<<a*b<<endl;

    cout<<"Division: "<<(double)a/b<<endl;

    cout<<"Modulus: "<<a%b;

}

//Ques-02: Create a Complex class to represent complex numbers and overload the +, -, operators to perform arithmetic operations on complex numbers.

class complex{
        public:
        int a;
        int b;
};
int main(){
    cout<<"Complex Number 1: ";
    complex n;
    cin>>n.a;
    cin>>n.b;
    cout<<(n.a)<<" + "<< (n.b)<<"i"<<endl;
    cout<<"Complex Number 2: ";
    complex n1;
    cin>>n1.a;
    cin>>n1.b;
 cout<<(n1.a)<<" + "<< (n1.b)<<"i"<<endl;
    cout<<"Sum: "<<(n.a)+(n1.a)<<" + "<<(n.b)+(n1.b)<<"i"<<endl;
     cout<<"Difference: "<<(n.a)-(n1.a)<<" + "<<(n.b)-(n1.b)<<"i"<<endl;
}
