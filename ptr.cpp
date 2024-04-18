#include<iostream>
using namespace std;

int main(){
    int a=5;
    cout<<a<<endl;

    int *ptr=&a;
    cout<<ptr<<endl;

    cout<<*ptr<<endl;

    cout<<sizeof(ptr);
}