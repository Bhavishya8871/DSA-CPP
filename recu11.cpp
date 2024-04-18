#include<iostream>
using namespace std;

void alloccu(int *arr,int size,int target,int index){
    //base case
    if(index>=size){
        return;
    }
    if(arr[index]==target){
        cout<<index<<" ";
    }
    alloccu(arr,size,target,index+1);
}
int main(){
    int arr[]={10,20,10,30,10,40};
    int size=6;
    int target=10;
    int index=0;
    alloccu(arr,size,target,index);
}