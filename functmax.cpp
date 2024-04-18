#include<iostream>
using namespace std;

void max(int a, int b,int c){
    if(a>b&&a>c){
        cout<<"a is max";
    }
    else if(b>a&&b>c){
        cout<<"b is max";
    }
    else{
        cout<<"c is max";
    }
}

int main(){
    max(10,43,76);
    return 0;
}
