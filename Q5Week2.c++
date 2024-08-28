//Day - 05 Questions - Week-02 (August 21th, 2024)

//Ques-01 Write a C++ function that checks whether an integer is odd or even. If the integer is odd, print "Odd"; otherwise, print "Even."

#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;

    if(a%2==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
}


//Ques-02 Write a C++ function that takes a string as input and reverses it.
#include <string>
int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;

    int i=0, j=str.length()-1;
    while(i<=j){
        swap(str[i++],str[j--]);
    }
    cout<<"Reversed string: "<<str;
}

//Ques-03 Write a C++ function that takes a string as a parameter and checks how many vowels and consonants are in that string. Assuming that string contains only lowercase.

int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    //vowles
    int count=0;
    //consonants
    int n=0;
    for(int i=0; i<str.length(); i++){
        if(str[i]=='a'){
            count++;
        }
        else if(str[i]=='e'){
            count++;
        }
        else if(str[i]=='i'){
            count++;
        }
        else if(str[i]=='o'){
            count++;
        }
        else if(str[i]=='u'){
            count++;
        }
        else{
            n++;
        }
    }

    cout<<"Number of vowels: "<<count<<endl;
    cout<<"Number of consonants: "<<n;
}
