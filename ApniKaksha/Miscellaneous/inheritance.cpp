/*
This program acts as an intro to inheritance.

By inheritance, it is possible to inherit attributes and methods from one class to another.
*/




#include<iostream>
using namespace std;

/*											//Single Inheritance
class A{
	public:
		void funcA(){
			cout<<"Func A"<<endl;
		}
};
class B : public A{							//Here class B inherits the public and protected attributes and methods of class A and stores them as its own public 
};											//and protected attributes (and methods). If we had written 'class B: private A', that would have meant that B inherits
*/											//public and protected values of A and stores them as its own private values.


/*											//Multiple Inheritance
class A{
	public:
		void funcA(){
			cout<<"Func A"<<endl;
		}
};
class B{
	public:
	void funcB(){
		cout<<"Func B"<<endl;
	}
};	
class C : public A, public B{				//C inherits both A and B
};
*/


											
class A{									//Multi-level Inheritance
	public:
		void funcA(){
			cout<<"Func A"<<endl;
		}
};
class B: public A{							//B inherits A
	public:
		void funcB(){
			cout<<"Func B"<<endl;
		}
};	
class C : public B{							//C inherits B
};



int main(){
	/*
	B obj;									//Instantiating B (For single inheritance)
	obj.funcA();
	*/

	
	C obj;									//Instantiating C (For multiple and multi-level inheritance)				
	obj.funcA();
	obj.funcB();
	
	
	return 0;
}
