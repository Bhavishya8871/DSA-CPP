#include<iostream>
using namespace std;

bool isSort(int *arr,int size,int index ){
    if(index>=size){
        return true;
    }
    if(arr[index]>arr[index-1]){
        bool agekaans=isSort(arr,size,index);
        return agekaans;
    }
    else{
        return false;
    }
}
int main(){
    int arr[]={10,20,40,60,70,80};
    int size=6;
    int index=1;
    if(isSort){
        cout<<" aaray is sorted ";
    }
    else{
        cout<<"array is not sorted";
    }
}