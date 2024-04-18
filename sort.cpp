#include<iostream>
using namespace std;

int main(){
    int arr[]={1,0,2,0,2,1,0,2,1};
    int size=9;
    int color=0;
    int left=0;
    int right=size-1;
    while(color<=right){
        if(arr[color]==0){
            swap(arr[color],arr[left]);
            left++;
            color++;
        }
        else if(arr[color]==2){
            swap(arr[color],arr[right]);
            right--;
        }
        else{
            color++;
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
   
}