/*
This program acts as an intro to encapsulation. Encapsulation is the act of hiding "sensetive" data from the user.

For public --> Attributes can be accessed outside the class as well as derived by another class
For private --> Attributes cannot be accessed outside the class and neither can it be derived by another class
For protected --> Attributes cannot be accessed outside the class, but they can be derived by another class
*/




#include<iostream>
using namespace std;

class A{
	public:
		int a;
		void funcA(){
			cout<<"Func A"<<endl;
		}
	private:
		int b;
		void funcB(){
			cout<<"Func B"<<endl;
		}
	protected:
		int c;
		void funcC(){
			cout<<"Func C"<<endl;
		}	
};

int main(){
	A obj;
	obj.funcA();
	//obj.funcB();								//We cannot do this as function B is private and thus cannot be accessed outside the class 
	return 0;
}
