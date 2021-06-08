 /*
This program is a beginner's guide to pointers in C++.
*/




#include<iostream>
using namespace std;

int main(){
	int a=10;
	int *ptr;
	ptr=&a;

	char c='A';
	char *aptr;
	aptr=&c;

	cout<<"Value of a : "<<a<<endl;
	cout<<"Address of a : "<<&a<<endl;
	cout<<endl;
	cout<<"Value of a : "<<*ptr<<endl;
	cout<<"Address of a : "<<ptr<<endl;

	*ptr=20;
	cout<<"Value of a after change: "<<a<<endl;
	cout<<endl;
	
	ptr++;		//Increaments pointer to the next pointer location (increases by 4 in case of integers, while 1 in case of characters)
	cout<<"Value of the ptr (i.e. new address after increament) : "<<ptr<<endl;
	cout<<"Value in the address, held by the pointer after increament: "<<*ptr<<endl;



	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Value of c : "<<c<<endl;
	cout<<"Address of c : "<<(void *)&c<<endl;		//By void type casting, we tell the compiler to print the pointer value and not the character located at that 
													//address. (Happens due to operator overloading)
	cout<<endl;
	cout<<"Value of c : "<<*aptr<<endl;
	cout<<"Address of c : "<<(void *)aptr<<endl;	// "

	*aptr='B';
	cout<<"Value of c after change: "<<c<<endl;
	cout<<endl;
	
	aptr++;		//Increaments pointer to the next pointer location (increases by 1 in case of characters, while 4 in case of integers)
	cout<<"Value of the aptr (i.e. new address after increament) : "<<(void *)aptr<<endl;
	cout<<"Value held by the address held by the pointer : "<<*(int *)aptr<<endl;	//Prints the integer at that pointer address.
	




	cout<<endl;
	cout<<endl;
	cout<<endl;
	int **pptr;
	pptr=&ptr;
	cout<<"Address of the integer pointer : "<<pptr<<endl;
	cout<<"Address held by the integer pointer (i.e. address of the garbage value) : "<<*pptr<<endl;		//This is called dereferencing. This one is single dereferencing.
	cout<<"Value at the address held by the integer pointer (i.e. the garbage value) : "<<**pptr<<endl;		//This one is double dereferencing.


	return 0;	
}
