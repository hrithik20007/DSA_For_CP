/*
A program to demonstrate a few methods for a string (continued from 1).
*/



#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

	string s1="Hello there ";
	string s2="buddy!";
	string s3="buddy!";
	string s4="apple!";
	
	s1.clear();  				//Clears the string (i.e. makes it empty)
	cout<<s1<<endl;				//Prints empty string

	bool f1=s2.compare(s3);		//Gives False (or 0) if same    ----> Thus opposite
	bool f2=s2.compare(s4);		//Gives True (or 1) if not same  
	cout<<f1<<endl;			//0
	cout<<f2<<endl;			//1

	bool f3=s1.empty();			//Gives True (1) as s1 is empty
	bool f4=s2.empty();			//Gives False (0) as s2 is not empty
	cout<<f3<<endl;
	cout<<f4<<endl;	

	s4.erase(2,2);				//Deletes a part of the string. The first parameter is for the starting index from which erasing should start and the second
								//parameter gives the length of the substring to be deleted.
	cout<<s4<<endl;



	cout<<"Index of 'dy' in buddy! : "<<s3.find("dy")<<endl;	//Gives index of the part of the string mentioned



	s3.insert(2,"mpy bu");										//Inserts a substring to the string at the given index
	cout<<s3<<endl;



	cout<<"Length of buddy! : "<<s2.length()<<endl;				//Gives length of the string



	string s5=s2.substr(1,3);	//Gives substring from the first index to the next provided index (including the characters at both the indexes).
	cout<<s5<<endl;



	string s6="900";
	int a=stoi(s6);				//Returns the integer form of a given string
	cout<<a+1<<endl;



	string b=to_string(a)+"1";	//Converts the given data type to string and appends '1' at the end
	cout<<b<<endl;



	sort(s2.begin(), s2.end());	//Sorts s2 from beginning to end (Requires the algorithm header file)
								//s2.begin() returns an iterator pointing to the first element of s2, while s2.end() does the same for the last element
	cout<<s2<<endl;


	
	return 0;
}
