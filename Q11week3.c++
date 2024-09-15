//Ques 1: You are given an array and target value. Your task is to find the target value that exists in the array. If it exists inside an array then print YES otherwise NO.
#include <iostream>
using namespace std;
int main(){
   int arr[]={2,4,6,7,8};
   int n=sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"target: ";
    cin>>target;

    bool flage=false;
    for(int i=0; i<n; i++){
        if(target==arr[i]){
           flage=true;
            break;
        }
    }

cout<<flage;
}



//Ques 2: You are given an array and target value. You have to find the index of target value. If target doest exist inside the array then print -1.Assume indexing is 1 based.
#include <iostream>
using namespace std;
int main(){
    int arr[]={2,4,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=6;

    int idx=-1;
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            idx=i;
            break;
        }
    }

    cout<<idx;
}


