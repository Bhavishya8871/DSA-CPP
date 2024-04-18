#include<iostream>
using namespace std;

int searchnearlysorted(int arr,int n ,int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid-1]==target){
            return mid-1;
        }
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid=1]==target){
            return mid+1;
        }
        if(target>arr[mid]){
            s=mid+2;
        }
        else{
            e=mid-2;
        }
        mid=s+(e-s)

    }
}

int main(){
    int arr[]={20,10,30,50,40,70,60};
    int n=7;
    int target=60;
    int found=searchnearlysorted(arr,n,target);

    if(found==-1){
        cout<<"element not found";
    }
    else{
        cout<<"element found";
    }
}