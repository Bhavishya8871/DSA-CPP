#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin>>n;
	int sumeven=0;
	int sumodd=0;
	
	while(n!=0){
		int x=n%10;
		n=n/10;
		if( x%2==0){
			sumeven+=x;
		}
		else{
			sumodd+=x;
		}
	}
	cout<<sumeven<<" ";
	cout<<sumodd;
	
}
