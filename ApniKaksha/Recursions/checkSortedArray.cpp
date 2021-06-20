/*
Check if the given array is sorted or not (for both strictly increasing and strictly decreasing cases).

Logic:
The first elements are dropped at each recursion stage and the size reduces by 1. The first element at each stage is checked with the second element and  
the result of the previous same comparison is taken into consideration as well.
Also, when only 1 element is left, it returns true which is the base case.
*/



#include<iostream>
using namespace std;

bool dec(int b[],int n){			//Checks if in decreasing order
	if(n==1)
		return true;				//Returns true if only one element left 
	int s=dec(b+1,n-1);
	return (b[0]>b[1] && s);		//Updates s as true or false, depending on the first condition
}

bool inc(int a[],int n){			//Checks if in increasing order
	if(n==1)
		return true;				//Returns true if only one element left
	int s=inc(a+1,n-1);
	return (a[0]<a[1] && s);		//Updates s as true or false, depending on the first condition
}

int main(){
	int n=7;
	int a[7]={1,2,3,4,5,6,7};
	int b[7]={7,6,4,5,3,2,1};
	cout<<inc(a,n)<<endl;
	cout<<dec(b,n)<<endl;
	return 0;
}
