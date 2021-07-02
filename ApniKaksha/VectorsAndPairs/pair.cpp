/*
This program is an intro to pairs in C++.
*/



#include<bits/stdc++.h>
using namespace std;

int main(){
	pair<int,char> p;
	p.first=3;
	p.second='a';

	cout<<p.first<<endl;		//Prints first element 
	cout<<p.second<<endl;		//Prints second element
	return 0;
}
