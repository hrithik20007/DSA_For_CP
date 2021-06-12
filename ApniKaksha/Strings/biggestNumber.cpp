//The purpose of this program is to sort a string number in a way to represent the greatest number possible from the given digits.


#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	int i;
	string s3,s4;

	string s1="53214";
	cout<<"Original : "<<s1<<endl;

	sort(s1.begin(),s1.end(),greater<int>());		//Sorts the string in descending order
	cout<<"After sorting : "<<s1<<endl;
	
	return 0;
}
