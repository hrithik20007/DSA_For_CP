/*
This program prints the combination of individual characters of each keypad on a phone (as we provide in a string). Here we have provided "23", so it will print the
combinations of consecutive characters in a phone keypad of 2 and 3. (i.e. a,b,c and d,e,f respectively).

Logic:
We pass a string whose characters signify the consecutive phone digit characters from the array letters. We find the letters of each character digit. We pass the 
substring excluding the first character of the string for the next recursion call. We iterate over the digit characters via a for loop and add them to ans.

																      It will look like:
																		    "23",""			 							
												"3","a"					    "3","b"		 				     "3","c"		        	       
										"","ad"  "","ae"  "","af"  "","bd"  "","be"  "","bf"    "","cd"  "","ce"  "","cf"	--> This is where the ans will be printed
*/



#include<iostream>
using namespace std;

string letters[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};				//global string array

void phone(string s, string ans){
	int i;
	if(s.length()==0){
		cout<<ans<<endl;
		return;
	}

	char c=s[0];
	string digits=letters[c-'0'];			//Stores the string at the provided string's (i.e. "23") first character's array number
	string s1=s.substr(1);					//Stores the "3" from "23" and then "" for the next recursive call

	for(i=0;i<digits.size();i++){			//Iterates over the string characters in letters[2] and then letters[3] in the next recursive call
		phone(s1,ans+digits[i]);			
	}
}

int main(){
	phone("23","");
	return 0;
}
