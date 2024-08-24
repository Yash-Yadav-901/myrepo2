//Day - 03 Questions - Week-01 (August 16th, 2024)


//Ques - 01: Write a C++ program that takes an integer N as input from the user and calculates the sum of the first N natural numbers using a for loop.
#include <iostream>
using namespace std;
int main(){
    int  n;
    cout<<"Enter a number: ";
    cin>>n;
    
    int sum=(n*(n+1))/2;
    cout<<"The sum of the first 5 natural numbers is: "<<sum;
    
}

//Ques-02: Write a C++ program that takes an integer N as input from the user and calculates the factorial of N using a loop.

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1; i<=10; i++){
        cout<<i<<" X "<<n<<" = "<<i*n<<endl;
    }
}