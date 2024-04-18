#include<iostream>
using namespace std;

int linearSearch(int arr[],int size){
    int zerocount=0;
    int onecount=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zerocount +=1;
        }
        if(arr[i]==1){
            onecount +=1;
        }
    }

    cout<<zerocount<<endl;
    cout<<onecount<<endl;
}

int main(){
    int arr[10]={0,1,0,1,0,1,0,1,0,1};
    int size=10;
    linearSearch(arr,size);
}