/*
This program checks whether the given number is a power of 2 or not.

Logic: 
When we do n-1, then if a number is 10100, it will become 10011. That is, the rightmost 1 changes to 0 and all the digits after it becomes 1.
If a number is a power of 2, then its binary will have only one 1, like 0010 or 0100. Its n-1 will give 0001 or 0011. 
When we do (n & n-1) and n is a power of 2, then the outcome will always be 0.
*/




#include<iostream>
using namespace std;

int main(){
	int n=8;
	if(n && !(n & n-1)){				//We do 'n &&' as we are considering a base case where n is not 0.  
		cout<<"Power of 2"<<endl;
	}
	else
		cout<<"Not power of 2"<<endl;

	return 0;
}
