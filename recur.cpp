#include<iostream>
using namespace std;

int factorial( int n){
    //base case
    if(n==1){
        return 1;
    }
    if(n==0){
        return 1;
    }

    int ans=n*factorial(n-1);
    return ans;
}

int main(){
    int n;
    cin>>n;
    int solve=factorial(n);
    cout<<solve;
}
