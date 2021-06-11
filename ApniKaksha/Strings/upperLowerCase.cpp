/*
A program to demonstrate a how to convert a string into lower case or upper case. 

1st method --> By manipulating ther ASCII codes
2nd method --> By using the transform function
*/



#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	int i;
	string s3,s4;

	string s1="Hello there!";
	cout<<"Original : "<<s1<<endl;

	/*
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
	*/

	transform(s1.begin(),s1.end(),s1.begin(), ::toupper);		//First two parameters are the beginning and ending parameters of the input string. Third parameter
																//is where we store our result and the last one is our operation.
	cout<<"After 1st editing : "<<s1<<endl;

	transform(s1.begin(),s1.end(),s1.begin(), ::tolower);
	cout<<"After 2nd editing : "<<s1<<endl;
	
	return 0;
}
