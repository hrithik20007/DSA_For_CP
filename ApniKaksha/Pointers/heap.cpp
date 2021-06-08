/*
Mainly to explore how a heap works in contrast to a stack.

Stack has a fixed memory. Also, the program has to know how much memory should be allocated to it during compilation. This memory cannot be changed during run-time.
This is where the concept of heap comes in. 
In heaps, we can dynamically allocate and deallocate memory to a variable. This is also called free store because unlike stack, its memory can be expanded
according to a program's requirements. We use the 'new' keyword to store a variable in heap.
Unlike stack, we have to manually deallocate memory in heap.
*/




#include<iostream>
using namespace std;

int main(){
	int a=10;					//Stored in stack
	int *ptr = new int();		//Stored in stack but memory is allocated in heap to store the integer in the memory location, to which ptr will point to

	*ptr=10;					//ptr from stack points to 10 in heap
	//ptr=&a;					//We cannot do this as ptr will then point to a's address in stack.
	cout<<ptr<<endl;

	delete(ptr);				//We deallocate the memory in heap (which also deletes the value stored in that memory location). But the pointer remains in the stack
								//This case is known as dangling pointer.
	ptr= new int[4];			//New memory is allocated for an array
	cout<<ptr<<endl;

	delete[]ptr;				//Dealloactes memory assigned for the array
	cout<<ptr<<endl;
	ptr=NULL; 					//Dealloactes the pointer (otherwise the dangling pointer remains).
	cout<<ptr<<endl;
								//All the first three cout print the same address. The last one will show us 0.
	return 0;
}
