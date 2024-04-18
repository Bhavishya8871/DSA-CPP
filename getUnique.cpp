#include<iostream>
using namespace std;

int getUnique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
    int arr[]={2,10,11,13,10,2,15,13,15};
    int size=9;
   // getUnique(arr,size);
    int unique=getUnique(arr,size);
    cout<<unique;
    //cout<<getUnique;
}