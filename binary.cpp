#include<iostream>
using namespace std;

int binaryMethod1(int n){
    while(n>0){
        int bit=n%2;
        cout<<bit<<endl;
        n=n/2;
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    int binary=binaryMethod1(n);
}