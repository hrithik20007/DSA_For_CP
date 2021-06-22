/*
This program prints a given string's reverse form. 

Logic: The function is called first and then the first character of the original string is printed, so that the characters are printed on their way up or in 
reversed order.
*/


#include<iostream>
using namespace std;

void reverse(string s){
	if(s.length()==0)
		return;
	string s1=s.substr(1);
	reverse(s1);
	cout<<s[0];
	return;
}

int main(){
	string s="binod";
	reverse(s);
	return 0;
}
