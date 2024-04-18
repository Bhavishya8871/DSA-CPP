#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int n=5;
    cout<<"enter the elements of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int j=0;j<n;j++){
        cout<<arr[j];
    }
}