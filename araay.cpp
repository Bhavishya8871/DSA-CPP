#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};

    cout<<arr[3]<<endl;
    cout<<arr[1]<<endl;

    int brr[]={4,7,5,3,2};
    cout<<brr[3]<<endl;
    cout<<brr[4]<<endl;

    int crr[10]={1,2,3,4,5,6,7,8,9,0};
    int n=10;
    for(int i=0;i<n;i++){
        cout<<crr[i]<<endl;
    }

}