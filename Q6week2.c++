//Day - 06 Questions - Week-02 (August 22th, 2024)

//Ques-01 Write a C++ program that takes an array as input and prints the sum of the array.

#include <iostream>
using namespace std;
int main(){
    int s;
    cout<<"Enter the size of the array: ";
    cin>>s;
    int arr[s];
    cout<<"Enter the array: ";
    for(int i=0; i<s; i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0; i<s; i++){
        sum+=arr[i];
    }
    cout<<"Sum of the array: "<<sum;
}



//Ques-02 Write a C++ program that takes an array as input and prints the sum of odd numbers and the sum of even numbers separately.

int main(){
    int s;
    cout<<"Enter the size of the array: ";
    cin>>s;
    int arr[s];
    cout<<"Enter the array: ";
    for(int i=0; i<s; i++){
        cin>>arr[i];
    }
    //sum for odds
    int so=0;
    //sum for evens
    int se=0;
    for(int i=0; i<s; i++){
        if(arr[i]%2==0){
            se+=arr[i];
        }
        else{
            so+=arr[i];
        }
        
    }
    cout<<"Sum of odd numbers:  "<<so<<endl;
    cout<<"Sum of even numbers: "<<se;
}


//Ques-03 Write a C++ program that takes an array as input and prints the number of odd numbers and the number of even numbers in the array.
int main(){
    int s;
    cout<<"Enter the size of the array: ";
    cin>>s;
    int arr[s];
    cout<<"Enter the array: ";
    for(int i=0; i<s; i++){
        cin>>arr[i];
    }
    //sum for odds
    int so=0;
    //sum for evens
    int se=0;
    for(int i=0; i<s; i++){
        if(arr[i]%2==0){
            se++;
        }
        else{
            so++;
        }
        
    }
    cout<<"Number of odd numbers:   "<<so<<endl;
    cout<<"Number of even numbers:  "<<se;
}