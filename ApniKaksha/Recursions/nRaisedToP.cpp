/*
Calculates n**p recursively.

If p=3, then answer will be n*n*n.
*/



#include<iostream>
using namespace std;

int power(int n,int p){
	if(p==0)
		return 1;
	int s=n*power(n,p-1);	

	return s;
}

int main(){
	int n=5,p=4;
	cout<<power(n,p)<<endl;
	return 0;
}
