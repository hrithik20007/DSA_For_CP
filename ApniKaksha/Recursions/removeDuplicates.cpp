/*
This program removes all duplicates from a string.

Logic:
At first, the first character is stored in c and then the substring from the second character is passed for recursion. The length eventually reaches 0 and an empty
string is returned. Then, we start checking if the character c matches with the first character of the returned value. If yes, then the character is not added (thus
the repeated characters are cut), otherwise the character is added to the returned value.
*/




#include<iostream>
using namespace std;

string duplicate(string s){
	if(s.length()==0)
		return "";

	char c=s[0];
	string ans=duplicate(s.substr(1));

	if(c==ans[0])
		return ans;
	else
		return c+ans;
}

int main(){
	string s="aaaabbbeeecdddd";
	cout<<duplicate(s);
	return 0;
}
