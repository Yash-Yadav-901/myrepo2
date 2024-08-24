//Ques - 01 Write a C++ program that takes two strings as input from the user and concatenates them. Then, output the concatenated string.
#include <iostream>
#include <string>
using namespace std;
/*int main(){
    string str1;
    string str2;
    cout<<"Enter the first string: ";
    cin>>str1;
    cout<<"Enter the second string:";
    cin>>str2;

    string newStr=str1;
    newStr+=str2;
    cout<<"Concatenated string: "<<newStr;

}
*/
//Ques-02 Write a C++ program that takes five grades (integers) as input from the user and calculates the average grade. Output the average grade to the user.
/*int main(){
    int  grade;
    int sum=0;
    for(int i=0; i<5; i++){
        cout<<"Enter Grade "<<i+1<<": ";
        cin>>grade;
        sum+=grade;
    }
    float avg=(float)sum/5;

    cout<<"The average grade is: "<<avg;
}*/

//Ques- 03 Write a C++ program that takes an integer as input from the user and outputs its square.
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"The squre of "<<a<<" is: "<<a*a;

}
