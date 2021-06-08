/*
This program is an intro to passing pointers to a function. We have demonstrated "Pass by Reference" here. We can either pass pointers or addresses directly.
In the first example, we have sent pointers, while in the second example we have sent addresses directly.

In "Pass by Value", we only send the values of the variables to another local variable and not the variables themselves.
*/


#include<iostream>
using namespace std;

void swap(int *a, int *b){
	int t;
	t=*a;
	*a=*b;
	*b=t;	
}

int main(){

	int a,b;
	cout<<"Enter two numbers : "<<endl;
	cin>>a>>b;
	cout<<endl;
	cout<<"A : "<<a<<endl;
	cout<<"B : "<<b<<endl;
	cout<<endl;

	int *apt=&a;
	int *bpt=&b;
	swap(apt,bpt);									//This simplifies the problem of using multiple variables as in "Pass By Value" and we can use the same variables
													//after using them in the function through the pointers.
	cout<<"After swapping : "<<endl;
	cout<<"A : "<<a<<endl;
	cout<<"B : "<<b<<endl;

	return 0;
}




/*
#include<iostream>
using namespace std;

void swap(int *a, int *b){
	int t;
	t=*a;
	*a=*b;
	*b=t;	
}

int main(){

	int a,b;
	cout<<"Enter two numbers : "<<endl;
	cin>>a>>b;
	cout<<endl;
	cout<<"A : "<<a<<endl;
	cout<<"B : "<<b<<endl;
	cout<<endl;

	swap(&a,&b);
	cout<<"After swapping : "<<endl;
	cout<<"A : "<<a<<endl;
	cout<<"B : "<<b<<endl;

	return 0;
}
*/
