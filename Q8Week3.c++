//Ques 1: Write a function int stringLength(const std::string &str) that returns the length of a given string. Test your function with various strings in the main() function.
#include <iostream>
#include <string.h>
using namespace std;
int stringLength(string str){
    return str.size();
}
int main(){
    string str;
    getline(cin,str);
    cout<<"length of given string: "<<stringLength(str);
}


//Ques 2: Implement a function int countCharacter(const std::string &str, char ch) that counts the number of occurrences of a specific character in a given string. Test the function with different strings and characters.
int countCharacter(string str, char ch){
    int n=str.length();
    int count=0;
            for(int i=0; i<n; i++){
                if(ch==str[i]) count++;
            }

            return count;
}
int main(){
        string str;
        char ch;
        getline(cin,str);
        cout<<"character: ";
        cin>>ch;
        cout<<"number of oucrrence of character: "<<countCharacter(str,ch);
}


//Ques 3: Write a function std::string concatenateStrings(const std::string &str1, const std::string &str2) that concatenates two strings and returns the result. Test the function with various input strings.
string concatenateStrings(string & str1, string& str2){
    str1+=str2;
    return str1;
}
int main(){
    string str1,str2;
    cout<<"str1 : ";
    getline(cin,str1);
    cout<<"str2: ";
    getline(cin,str2);
    cout<<"output: "<<concatenateStrings(str1, str2);

}