#include<iostream>
using namespace std;

bool linearSearch(int *arr ,int size,int target,int index){
    if(index>=size){
        return false; 
    }
    if(arr[index]==target){
        return true;
    }
    bool agekaans=linearSearch(arr,size,target,index+1);
    return agekaans;
}
int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    int index=0;
    int target=90;
    cout<<linearSearch(arr,size,target,index);
}