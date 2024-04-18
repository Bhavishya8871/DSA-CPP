#include<iostream>
using namespace std;
int printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;

    }
}

bool linearSearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return true;
        }
       
    }
    return false;
}

int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    printArray(arr,5);
    int target=4;
    bool ans=linearSearch(arr,size,target);
    if(ans==true){
        cout<<"target found"<<endl;
    }
    else{
        cout<<"target not found";
    }





















}