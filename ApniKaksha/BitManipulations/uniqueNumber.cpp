/*
This program finds a unique number in an array where all numbers except one, are present twice.

Logic:
When we XOR even number of similar elements we get 0, otherwise (i.e. if odd number of 1s and odd number of 0s) we get the number itself, i.e. 1.
*/




#include<iostream>
using namespace std;

int main(){
	int i,xorsum=0,n=7;
	int ar[n]={1,2,4,4,1,2,3};
	
	for(i=0;i<n;i++){
		xorsum=xorsum^ar[i];		// ^ operator stands for XOR here
	}

	cout<<"The required number is : "<<xorsum<<endl;
	
	return 0;
}
