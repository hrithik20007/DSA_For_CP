/*
Finds the factorial of a given number (n) recursively.
*/



#include<iostream>
using namespace std;

int factorial(int n){
	if(n==0)
		return 1;
	int s=n*factorial(n-1);	

	return s;
}

int main(){
	int n=5;
	cout<<factorial(n)<<endl;

	return 0;
}
