#include<bits/stdc++.h>
using namespace std;

 int maxNum(int arr[3][4],int row,int col){
    int maxno=INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>maxno){
                maxno=arr[i][j];
            }
        }
    }
    return maxno;
}
int minNum(int arr[3][4],int row,int col){
    int minno=INT_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]<minno){
                minno=arr[i][j];
            }
        }
    }
    return minno;
}


int main(){
    int arr[3][4]={
                    {1,2,3,4},
                    {5,6,70,8},
                    {9,10,1,111}
                    };
    
    int row=3;
    int col=4;
    cout<<"max no is "<<maxNum(arr,row,col)<<endl;
    cout<<"min no is "<<minNum(arr,row,col);
}