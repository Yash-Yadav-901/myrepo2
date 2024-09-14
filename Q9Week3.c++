//Ques 1: Write a C++ program that declares an integer variable, initializes it, and then declares a pointer that stores the address of this variable. Print the value of the variable using both the variable itself and the pointer.
#include <iostream>
using namespace std;
int main(){
    int num=90;
    int *ptr=&num;
    cout<<num<<endl<<*ptr<<endl<<ptr;
}


//Ques 2: Write a program that declares an array of integers and a pointer that points to the first element of the array. Use pointer arithmetic to print all the elements of the array.
int main(){
    int arr[]={10,20,30,40,50};
    int *ptrarr=arr;
    for(int i=0; i<5; i++){
        cout<<*(ptrarr+i)<<" ";
    }
}


//Ques 3: Create a program that demonstrates the use of a pointer to a pointer. Declare an integer variable, a pointer to the integer, and a pointer to that pointer. Use all three to print the value of the integer.
int main(){
    int num;
    cout<<"num: ";
    cin>>num;
    int *ptr1=&num;
    int **ptr2=&ptr1;
    cout<<num<<endl;
    cout<<*ptr1<<endl;
    cout<<**ptr2;
    
}