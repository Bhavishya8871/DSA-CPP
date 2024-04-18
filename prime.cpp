#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        if(i==0||i==1){
            cout<<"not prime";
        }
        else if(n%i==0){
            cout<<"not prime";
        }
        else{
            cout<<"is prime";
        }
    }
}