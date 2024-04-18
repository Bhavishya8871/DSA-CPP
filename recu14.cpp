#include<iostream>
using namespace std;

int binarySearch(int arr[],int s,int e,int target){
    
    if(s>e){
        return -1;
    }
    int mid=s+(e-s)/2;

    if(arr[mid]==target){
        return mid;
    }
    else if(arr[mid]<target){
        return binarySearch(arr,mid+1,e,target);
    }
    else{
        return binarySearch(arr,s,mid-1,target);
    }
}
int main(){
    int arr[]={10,30,50,70,90};
    int size=5;
    int s=0;
    int e=size-1;
    int target=90;
    int res=binarySearch(arr,s,e,target);
    cout<<res;
}