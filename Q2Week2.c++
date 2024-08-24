//Day - 02 Questions - Week-01 (August 15th, 2024)

//Ques-01: Write a C++ program that takes three integers as input from the user and determines the largest of the three using if-else statements.
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter first number: ";
    cin>>a;
     cout<<"enter second number: ";
     cin>>b;
      cout<<"enter third number: ";
      cin>>c;

      if(a>b && a>c){
        cout<<"The largest number is: "<<a;
      }
      else if(b>a && b>c){
        cout<<"The largest number is: "<<b;
      }
      else{
        cout<<"The largest number is: "<<c;
      }
    
}

//Ques-02: Write a C++ program that takes an integer score (0-100) as input from the user and prints the corresponding grade using if-else-if statements.
int main(){
    int grade;
    cout<<"Enter the score: ";
    cin>>grade;

    if(grade>=90 && grade<=100){
        cout<<"Grade: A";
    }
    else if(grade>=80 && grade<=89){
        cout<<"Grade: B";
    }
    else if(grade>=70 && grade<=79){
        cout<<"Grade: C";
    }
    else if(grade>=60 && grade<=69){
        cout<<"Grade: D";
    }
    else{
        cout<<"Grade: F";

    }
}


//Ques-03: Write a C++ program that takes an integer as input from the user and prints the corresponding month of the year using a switch case statement. Assume 1 = January, 2 = February, ..., 12 = December.If integer is not from 1 to 12 then print invalid.
int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    switch(a){
        case 1:
        cout<<"The month is: January";
        break;

        case 2:
        cout<<"The month is: February";
        break;
        case 3:
        cout<<"The month is: March";
        break;

        case 4:
        cout<<"The month is: April";
        break;

        case 5:
        cout<<"The month is: May";
        break;

        case 6:
        cout<<"The month is: June";
        break;

        case 7:
        cout<<"The month is: July";
        break;

        case 8:
        cout<<"The month is: August";
        break;

        case 9:
        cout<<"The month is: September";
        break;

        case 10:
        cout<<"The month is: October";
        break;

        case 11:
        cout<<"The month is: November";

        case 12:
        cout<<"The month is: December";
        break;
    }
}