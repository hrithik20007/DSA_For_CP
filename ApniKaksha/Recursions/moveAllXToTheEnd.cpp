/*
This program moves all the characters 'x' in a string to its end.

Logic:
At first, the first character is stored in c and then the substring from the second character is passed for recursion. The length eventually reaches 0 and an empty
string is returned. Then, we start checking if the character c is 'x'. If yes, then the character 'x' is added at the end of the returned string.
Otherwise the character is added at the front of the returned string.
*/




#include<iostream>
using namespace std;

string moveX(string s){
	if(s.length()==0)
		return "";

	char c=s[0];
	string ans=moveX(s.substr(1));

	if(c=='x')
		return ans+c;
	else
		return c+ans;
}

int main(){
	string s="axxbdxcefxhix";
	cout<<moveX(s);
	return 0;
}
