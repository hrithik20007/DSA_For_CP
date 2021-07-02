/*
This program is mainly to showcase features of a vector in C++.

Arrays are implemented in stack, so they have a static memory. Vectors are dynamic array and the memory allocated to them can be changed. We also don't define any
length in this case.
*/




#include<bits/stdc++.h>
using namespace std;

int main(){
	int i;
	vector<int> v1;
	v1.push_back(3);						//For appending elements
	v1.push_back(1);
	v1.push_back(2);


	for(i=0;i<v1.size();i++){				//Unlike in an array, we can use size() to find the length of a vector. (We can also use it in strings)
		cout<<v1[i]<<" ";					//3 1 2
	}
	cout<<endl;
	cout<<endl;


	vector<int>::iterator j;				//j is a pointer
	for(j=v1.begin();j!=v1.end();j++){
		cout<<*j<<" ";						//3 1 2
	}
	cout<<endl;
	cout<<endl;


	v1.pop_back();							//To pop elements

	
	for(auto element:v1){
		cout<<element<<" ";					//3 1
	}
	cout<<endl;
	cout<<endl;


	vector<int> v2(3,50);					//Makes a three-element vector, all with the values 50.
	for(i=0;i<v2.size();i++){
		cout<<v2[i]<<" ";					//50 50 50
	}
	cout<<endl;
	cout<<endl;


	swap(v2,v1);							//Swaps v1 with v2 (i.e. v2 becomes v1 and vice-versa)
	for(auto element:v1){
		cout<<element<<" ";					//50 50 50
	}
	cout<<endl;
	for(auto element:v2){
		cout<<element<<" ";					//3 1
	}
	cout<<endl;
	cout<<endl;


	sort(v2.begin(),v2.end());				//sorts the elements of the vector
	for(i=0;i<v2.size();i++){
		cout<<v2[i]<<" ";					//1 3
	}
	cout<<endl;


	return 0;
}
