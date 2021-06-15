/*
This program finds all the subsets of a given array via bit manipulation.

Logic: 
Example - {a, b, c}

Subsets    Binaries     Their numbers
{}           000			 0
{c}			 001			 1
{b}			 010		 	 2
{b,c}		 011			 3
{a}			 100			 4
{a,c}		 101			 5
{a,b}		 110			 6
{a,b,c} 	 111			 7 --> This is 2^n-1 where n is the array size (i.e. 3)
*/




#include<iostream>
using namespace std;

int main(){
	int i,j,n=3;
	int ar[n]={1,3,5};
	
	for(i=0;i<(1<<n);i++){		// 1<<n is same as 2^n. We do this because we know that the last subset binary will be equal to that of 2^n-1, where n is array size.
		for(j=0;j<n;j++){		//To traverse the individual bits of i's binary and do getbit in the following if statement.
			if(i&(1<<j)){       //In the first condition, there is no setbit and nothing is printed out
				cout<<ar[j]<<" ";
			}
		}
		cout<<endl;
	}
	

	return 0;
}
