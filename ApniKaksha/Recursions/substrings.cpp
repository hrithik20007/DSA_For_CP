/*
This program prints the substrings (not permutations) of a given string "ABC".

Logic:
We store the first character of the string and send the remaining part of the string into two recursive function calls, alongwith an empty string which will store 
the answer. The first function stores the first character in its answer string while the other one does not.

																It will look like:
																		""							Original s="ABC"
															""						A               Original s="BC"
														""		 B				A 		AB          Original s="C"
													"" 		C B		BC		 A 	  AC  AB  ABC		Original s="" --> This is where ans gets printed
*/




#include<iostream>
using namespace std;

void substring(string s, string ans){
	if(s.length()==0){
		cout<<ans<<endl;
		return;
	}

	char c=s[0];
	string s1=s.substr(1);

	substring(s1,ans);
	substring(s1,ans+c);	
}

int main(){
	substring("ABC","");
	return 0;
}
