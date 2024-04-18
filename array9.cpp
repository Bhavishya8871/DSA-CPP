#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
   
    int left=0;
    int right=size-1;
    while(left<=right){
        if(left=right){
            cout<<arr[left];

        }
        else{
            cout<<arr[left]<<endl;
            cout<<arr[right]<<endl;
        }
        // cout<<arr[left]<<endl;
        // cout<<arr[right]<<endl;
        left++;
        right--;
    }
  

    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }

}

int main(){
    int arr[6]={10,20,30,40,50,60};
    int size=6;
    reverseArray(arr,size);
}