/*
This program is an intro to different kinds of polymorphism. Polymorphism indicates that a thing can exist in different forms.



Types-- 
1)Compile Time
- Function Overloading -> When we have different functions of same name, but we define different number or types of attributes.
- Operator Overloading -> When we define different behaviour of an operator.

2)Run Time
- Virtual Functions -> When we have a class which inherits from another class and we call that function, then the program may be confused which one to call. So,
					   we use 'virtual' keyword before the function which we don't want to be called. This confusion arises when there are same functions in the
					   derived class as in the base class and the program won't know from where to call that function - the base class or derived. 
*/





#include<iostream>
using namespace std;

class A{
/*										//Function Overloading
	public:
	void func(int a){
		cout<<a<<endl;
	}

	void func(double b, string s){
		cout<<b<<" "<<s<<endl;
	}
*/


/*										//Operator Overloading
	public:								
	int real;
	int img;
	A(int r=0, int i=0){
		real=r;
		img=i;
	}

	A operator + (A &a){				//The operator returns a new A type variable after performing its action whose 'real' value will be as 'res.real' here.
		A res;							//res is an object of class A
		res.real=a.real+real;
		res.img=a.img+img;
		return res;
	}

	void show(){
		cout<<"The complex number is : "<<real<<" + i"<<img<<endl;
	}
*/
};


class X{								//Virtual Functions
	public:
	virtual void print(){				//If we don't write virtual, then X's print will be called; otherwise Y's.	
		cout<<"Print of X"<<endl;
	}
	void display(){
		cout<<"Display of X"<<endl;
	}	
};

class Y: public X{
	public:
	void print(){
		cout<<"Print of Y"<<endl;
	}
	void display(){
		cout<<"Display of Y"<<endl;
	}
};



int main(){
	/*
	A obj;

	obj.func(1);						//Testing function overloading. Calling two functions with same name but with different parameters.
	obj.func(2.4,"Hrithik");
	*/

	/*
	A obj1(3,5);						//Testing operator overloading
	A obj2(2,4);
	A obj3;
	obj3=obj1+obj2;
	obj3.show();
	*/

	X *ptr;								//Testing virtual functions
	Y obj2;
	ptr= &obj2;

	ptr -> print();						//Print of Y
	ptr -> display();					//Display of X
	
	return 0;
}
