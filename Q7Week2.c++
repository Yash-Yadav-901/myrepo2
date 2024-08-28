//Day - 07 Questions - Week-02 (August 23th, 2024)

//Ques-01 Write C++ program that take array from the user and sort the array using bubble sort algorithm.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"N = ";
    cin>>n;
    int arr[n];
    cout<<"arr[]= ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n-1; i++){
        bool flag=true;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
            flag=false;
        }
        if(flag==true){
            break;
        }
    }

    cout<<"Output: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


//Ques-02 Write C++ program that take array from the user and sort the array using insertion sort algorithm.

int main(){
    int n;
    cout<<"N = ";
    cin>>n;
    int arr[n];
    cout<<"arr[]= ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    
    for(int i=1; i<n; i++){
       int j=i;
        while(j>=1){//4 3 1 9 7
            if(arr[j]>=arr[j-1]){
                break;
            }
            if(arr[j]<=arr[j-1]){
                swap(arr[j-1],arr[j]);
            }
            j--;
        }
    }

    cout<<"Output: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
