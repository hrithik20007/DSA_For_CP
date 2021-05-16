/*

Returns whether the three numbers are pythagorian triplet or not. That is, b^2+c^2=a^2.

*/

#include<iostream>
using namespace std;

bool pythagorian(int a,int b,int c){
	int temp;
	if(b>a){	
		temp=a;
		a=b;
		b=temp;
	}
	if(c>a){
		temp=c;
		c=a;
		a=temp;
	}
	//Sets a as the biggest of the three
	
	if((b*b+c*c)==a*a){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	int a1,b1,c1;
	cout<<"Enter 3 numbers :"<<endl;
	cin>>a1>>b1>>c1;
	cout<<boolalpha<<pythagorian(a1,b1,c1);	//boolalpha converts 1 into true and 0 into false
	return 0;
}
