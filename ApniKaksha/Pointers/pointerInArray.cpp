/*
This program is an intro to pointers in an array.
*/


#include<iostream>
using namespace std;

int main(){

	int arr[]={10,20,30,40};

	cout<<"Address of the first element in the array : "<<arr<<endl;			//arr holds the address of the first array element
	cout<<"Value of the first element : "<<*arr<<endl;							//*arr will show the element at the first address
	cout<<endl;
	//arr+=1;				//We cannot do this
	//cout<<(arr+1)<<endl;	//We may do this	

	int i;
	int *ptr=arr;	    														//Actually ptr is an index pointer.
	for(i=0;i<4;i++){
		cout<<"Element no. "<<(i+1)<<" of the array"<<" :  "<<*(ptr + i)<<endl;	//When we do ptr+1, that means it will point to the next index (not the next address).
																				//The next index may be 4 bytes away (i.e. address+4), if the variable type is integer.
	}
	return 0;
}
