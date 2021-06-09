/*
A program to demonstrate a few methods for a string.
*/



#include<iostream>
#include<string>
using namespace std;

int main(){
	string s3,s4;

	string s1="Hello there ";
	string s2="buddy!";

	//Appending methods
	s3=s1+s2;
	cout<<s3<<endl;

	s4=s1.append(s2);
	cout<<s4<<endl;

	//Accessing the characters in the string
	cout<<"Third character in the first string : "<<s1[2]<<endl;
	cout<<"Fourth character in the second string : "<<s2[3]<<endl;
	
	return 0;
}
