#include<iostream>
using namespace std;

void doublearray(int arr[],int size,int index){
    if(index>=size){
        return ;
    }
    arr[index]=(arr[index]*2);
    cout<<arr[index]<<" ";

    doublearray(arr,size,index+1);

}
int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    int index=0;
    doublearray(arr,size,index);

}