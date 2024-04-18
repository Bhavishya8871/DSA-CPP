#include<iostream>
using namespace std;

void PrintArray(int arr[],int size , int index){
    //base case //jab index size se bada hoga toh index age nhi jayega
    if(index>=size){
        return;
    }
    
    //processing
    cout<<arr[index]<<" ";


    //recursive call
    PrintArray(arr,size,index+1);
    
    
}
int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    int index=0;
    PrintArray(arr,size,index);
}