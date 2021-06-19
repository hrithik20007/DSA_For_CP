/*
Adds all numbers till a given number (n) recursively.
*/



#include<iostream>
using namespace std;

int sum(int n){
	if(n==0)
		return 0;
	int s=n+sum(n-1);	

	return s;
}

int main(){
	int n=10;
	cout<<sum(n)<<endl;
	return 0;
}
