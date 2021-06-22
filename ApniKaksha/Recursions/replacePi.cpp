/*
This program replace the "pi" portions of a string to "3.14". 

Logic: The function is called after printing the string. It is printed as "3.14" if the first two characters are 'p' and 'i', otherwise the same character.
*/


#include<iostream>
using namespace std;

void replace(string s){
	string s1;
	if(s.length()==0)
		return;
	if(s[0]=='p' && s[1]=='i'){
		s1=s.substr(2);
		cout<<"3.14";
	}
	else{
		s1=s.substr(1);
		cout<<s[0];	
	}
	replace(s1);
	return;
}

int main(){
	string s="pippxxppiixipi";
	replace(s);
	return 0;
}
