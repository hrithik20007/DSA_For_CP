/*
This program finds the GCD or greatest common divisor of two given numbers.
Based on the Euclid Algorithm, it states when we update the remainder of a division to be the divisor of the previous division's divisor, then that divisor which 
will give the remainder as 0, is the GCD.

Example: For 24, 42
42%24=18
24%18=6
18%6=0

So 6 is the GCD.
*/


#include<iostream>
using namespace std;

int main(){
	int a,b,r;

	a=24;			//Smaller no.
	b=42;			//Larger no.

	while(a!=0){	//As soon as the remainder (after dividing b by a) becomes 0, the loop stops and the divisor which becomes b will be the GCD
		r=b%a;
		b=a;
		a=r;
	}

	cout<<"The required amount is : "<<b<<endl;
	return 0;
}
