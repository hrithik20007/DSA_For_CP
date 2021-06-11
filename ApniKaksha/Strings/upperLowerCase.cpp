/*
A program to demonstrate a few methods for a string.
*/



#include<iostream>
#include<string>
using namespace std;

int main(){
	int i;
	string s3,s4;

	string s1="Hello there!";
	cout<<"Original : "<<s1<<endl;

	//Converting to upper case
	for(i=0;i<=s1.size();i++){
		if(s1[i]>='a' && s1[i]<='z')
			s1[i]-=32;
	}
	cout<<"After 1st editing : "<<s1<<endl;

	//Converting to lower case
	for(i=0;i<=s1.size();i++){
		if(s1[i]>='A' && s1[i]<='Z')
			s1[i]+=32;
	}						
	cout<<"After 2nd editing : "<<s1<<endl;
	
	return 0;
}
