#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[4]={1,2,3,4};
    int n=4;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
            }
        }
    }
}