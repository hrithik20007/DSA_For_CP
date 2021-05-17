//Convert octal to decimal

#include<bits/stdc++.h>
using namespace std;

int conversion(long x){
	int d;
	int i=0,s=0;
	while(x>0){
		d=x%10;
		s+=d*pow(8,i);
		i+=1;
		x=x/10;
	}
	return s;
}

int main(){
	long n;
	cout<<"Enter an octal : "<<endl;
	cin>>n;
	cout<<conversion(n);
	return 0;
}
