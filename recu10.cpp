#include<iostream>
#include<limits.h>
using namespace std;

void mixno(int arr[],int size,int index,int &maxi){
    //base case
    if(index>=size){
        return;
    }
    maxi=max(maxi,arr[index]);

    mixno(arr,size,index+1,maxi);
}

int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    int index=0;
    int maxi=INT_MIN;
    mix no(arr,size,index,maxi);
    cout<<maxi;
}
