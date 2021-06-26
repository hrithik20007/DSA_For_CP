/*
This program prints the permutations (not substrings) of a given string "ABC".

Logic:
We start a for loop over our given string and extract an index's character, adding it in ans and sending the remaining string as the nww s. As we recursively call
the function within the for loops, the s becomes emptier and the ans stores the different permutations of the string.

																It will look like:
																	  ABC,""								The first string represents s and the second means ans
													BC,"A"		  	  AC,"B"		  	AB,"C"               	
												C,"AB"   B,"AC"    C,"BA"  A,"BC"    B,"CA"  A,"CB"  		
												ABC,"" 	 ACB,""	   BAC,""  BCA,"" 	 CAB,""	 CBA,""			--> This is where ans gets printed as all s=""
*/




#include<iostream>
using namespace std;

void substring(string s, string ans){
	int i;
	if(s.length()==0){
		cout<<ans<<endl;
		return;
	}

	for(i=0;i<s.size();i++){
		string s1=s.substr(0,i)+s.substr(i+1);
		substring(s1,ans+s[i]);
	}	
}

int main(){
	substring("ABC","");
	return 0;
}
