#include<iostream>
#include<vector>
using namespace std;

void printDigit(int num,vector<int> &ans){
    //basecase
    if(num==0){
        return;
    }
     int digit=num%10;
     num=num/10;

     printDigit(num,ans);

     ans.push_back(digit);
}
int main(){
    int num=4127;
    vector<int> ans;
    printDigit(num,ans);

    for(int prin: ans){
        cout<<prin<<endl;
    }
}