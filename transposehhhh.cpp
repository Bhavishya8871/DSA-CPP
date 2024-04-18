#include<iostream>
using namespace std;

int transpose(int arr[3][3],int row,int col){
    for (int i=0;i<row;i++){
        for(int j=i;i<col;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

}
void printArray(int arr[3][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[3][3]={ {10,20,30},
                    {40,50,60},
                    {70,80,90}
                  };
    int row=3;
    int col=3;
    transpose( arr,row,col);
    printArray(arr,row,col);
}
