#include<iostream>
using namespace std;

int fibonachi(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int ans=fibonachi(n-1)+fibonachi(n-2);
    return ans;

}
int main(){
    
    int solve=fibonachi(10);;
    cout<<solve<<" ";
}