#include<iostream>
#include<limits.h>
using namespace std;

int minNo(int arr[],int size){
    int minno=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<minno){
            minno=arr[i];
        }
    }
    cout<<minno;
}

int main(){
    int arr[7]={20,4,15,2,6,8,11};
    int size=7;
    minNo(arr,size);
}