/*
This principle is based on problems where we have to find the number of ways to do something.
The program finds the number of numbers between 1 and 1000, which are divisible by 5 or 7.

As the program mentions 'or', we have to discard the numbers which are divisible by both 5 and 7.
*/


#include<iostream>
using namespace std;

int main(){
	int a,b,c,r;

	a=1000/5;			//For the amount of numbers divisible by 5
	b=1000/7;			//For the amount of numbers divisible by 7
	c=1000/(5*7);		//For the amount of numbers divisible by both

	r=a+b-c;
	cout<<"The required amount is : "<<r<<endl;
	
	return 0;
}
