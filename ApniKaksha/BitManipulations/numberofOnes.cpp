/*
This program checks the number of 1s in the binary representation of a given number.

Logic: 
When we do n-1, then if a number is 10100, it will become 10011. That is, the rightmost 1 changes to 0 and all the digits after it becomes 1.
When we do (n & n-1), the resultant binary has a 1 less than n's binary. So, by doing so repeatedly, we can find the number of 1s in the binary until the 
resultant becomes 0.
*/




#include<iostream>
using namespace std;

int main(){
	int c=0,n=5;
	
	while(n>0){
		n= n & (n-1);
		c+=1;				//Keeps count of the number of iterations of the while loop and thus the number of 1s
	}

	cout<<"Number of 1s in the binary : "<<c<<endl;
	return 0;
}
