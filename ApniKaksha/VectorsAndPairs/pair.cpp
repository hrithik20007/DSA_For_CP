/*
This program is an intro to pairs in C++.
*/



#include<bits/stdc++.h>
using namespace std;

int main(){
	pair<int,char> p1;
	pair<int,char> p2;
	
	p1.first=3;					//Value of 1st element
	p1.second='a';				//Value of 2nd element

	p2=make_pair(9,'a');		//make_pair() returns a pair whose value we provide at the time of writing the function. We can do this instead of .first etc.

	cout<<p1.first<<endl;		//Prints first element 
	cout<<p1.second<<endl;		//Prints second element

	cout<<endl;

	cout<<p2.first<<endl;		//Prints first element 
	cout<<p2.second<<endl;		//Prints second element
	return 0;
}
