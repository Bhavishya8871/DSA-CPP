#include<iostream>
using namespace std;

int main(){
    int arr[10];
    int n=10;
    for(int i=0;i<n;i++){
        cout<<"enter the value at index no:"<<i<<endl;
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        cout<<"value at index "<<j<<": " <<arr[j]*2<<endl;
    }
}