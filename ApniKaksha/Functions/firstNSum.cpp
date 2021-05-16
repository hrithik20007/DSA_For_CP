//Sum of first n natural numbers

#include<iostream>
using namespace std;

int sum(int n){
	int i,s=0;
	for(i=1;i<=n;i++){
		s+=i;
	}
	return s;
}
int main(){
	int a,r;
	cout<<"Enter number: ";
	cin>>a;
	r=sum(a);
	cout<<r;
	return 0;
}
