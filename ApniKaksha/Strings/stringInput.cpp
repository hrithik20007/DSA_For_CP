/*
A program to demonstrate the different input methods of a string.
*/



#include<iostream>
#include<string>
using namespace std;

int main(){
	//This portion is commented as the program can take only one input at a time.
	/*
	string s;
	cout<<"Enter string : "<<endl;
	cin>>s;
	cout<<s<<endl;		//Can take only one-word as input. Takes the first word as input in case of sentences.
	*/

	string s1;
	cout<<"Enter string (may contain spaces) : "<<endl;
	getline(cin,s1);
	cout<<s1<<endl;		//Can take sentences containing spaces as inputs.

	string s2="Hello there!";
	cout<<s2<<endl;

	string s3(5,'n');	//Inputs n 5 times. Should be written in the same line as initialization.
	cout<<s3<<endl;

	
	return 0;
}
