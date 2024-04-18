#include<iostream>
#include<math.h>
using namespace std;

int power(int n){
    if(n==0){
        return 1;
    }
    int ans = 2 * pow(2,n-1);
    return ans;
}

int main(){
    int solve=power(10);
    cout<<solve;
    return 0;
}