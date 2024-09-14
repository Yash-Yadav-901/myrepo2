//Ques 1: Write a function int findMax(const int arr[], int size) that finds and returns the maximum value in an integer array. Test your function with various arrays in the main() function.
#include <iostream>
#include <climits>
using namespace std;

int findMax(const int arr[], int size){
    int maxe=INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]>maxe){
            maxe=arr[i];
        }
    }

    return maxe;
}
int main(){
    int arr[]={10,20,30,40,50};
    cout<<"max element: "<<findMax(arr,5);
}


//Ques 2: Write a function bool isPalindrome(const std::string &str) that checks whether a given string is a palindrome (a word, phrase, or sequence that reads the same backward as forward). The function should ignore spaces, punctuation, and case sensitivity. Test your function with various strings in the main() function.
#include <string>
bool isPalindrome(string str){
        int i=0;
        int j=str.length();
        while(i<=j){
            if(str[i]!=str[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
}
int main(){
    string str;
    getline(cin,str);
    cout<<"is palindrome: "<<isPalindrome(str);
}