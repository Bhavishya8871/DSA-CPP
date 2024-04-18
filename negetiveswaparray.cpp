#include<iostream>
using namespace std;


int shiftNega(int arr[],int size){
    int j=0;
    for(int index=0;index<size;index++){
      if(arr[index]<0){
        swap(arr[index],arr[j]);
        j++;
      }  
    }
}

int main(){
    int arr[7]={23,-7,12,-10,-11,40,60};
    int size=7;
    shiftNega(arr,size);

    cout<<"printing the array";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }


}