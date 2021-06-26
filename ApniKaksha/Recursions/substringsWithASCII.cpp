/*
This program prints the substrings (not permutations) of a given string "AB" alongwith combining their ASCII codes.

Logic:
We store the first character of the string and send the remaining part of the string into three recursive function calls, alongwith an empty string which will store 
the answer. The first function stores the first character in its answer string while the other one does not and the third stores the string form of the ASCII
code of the character in its answer.

																It will look like:
																		""			                		Original s="AB"
													""					A               	65				Original s="B"
												""	B	66			A 	AB   A66       65	65B   6566		Original s="" --> This is where ans gets printed
*/




#include<iostream>
using namespace std;

void substring(string s, string ans){
	if(s.length()==0){
		cout<<ans<<endl;
		return;
	}

	char c1=s[0];
	int c2=c1;
	string s1=s.substr(1);

	substring(s1,ans);
	substring(s1,ans+c1);
	substring(s1,ans+to_string(c2));			//to_string() converts another data type variable into string.
}

int main(){
	substring("AB","");
	return 0;
}
