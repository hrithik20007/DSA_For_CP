/*
This program prints the n-th fibonacci number.
*/



#include<iostream>
using namespace std;

int fibonacci(int n){
	if(n==1)
		return 1;
	else if(n==0)
		return 0;

	int s=fibonacci(n-1)+fibonacci(n-2);	
	return s;
}

int main(){
	int n=9;								//Indexing starts from 0 (So this is actually the tenth number where the 1st number is 0 and 2nd number is 1).
	cout<<fibonacci(n)<<endl;

	return 0;
}
