#include<iostream>
#include<limits.h>
using namespace std;

void minno(int arr[],int size,int index,int &mini){
    //base case
    if(index>=size){
        return;
    }
    mini=min(mini,arr[index]);

    minno(arr,size,index+1,mini);
}

int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    int index=0;
    int mini=INT_MAX;
    minno(arr,size,index,mini);
    cout<<mini;
}
