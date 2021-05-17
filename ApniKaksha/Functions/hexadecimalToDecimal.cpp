//Convert hexadecimal to decimal

#include<bits/stdc++.h>
using namespace std;

int conversion(string x){
	char d;
	int i=0,s=0;
	while(x.length()>0){
		d=x.at(x.length()-1);	//To get the last character of the string
		if(d>='A' && d<='F'){
			d=d-'A'+10;
		}
		else{
			d=d-'0';
		}
		s+=d*pow(16,i);
		i+=1;
		x=x.substr(0,x.length()-1);	  //To exclude the last character of the string
	}
	return s;
}

int main(){
	string n;
	cout<<"Enter a hexadecimal : "<<endl;
	cin>>n;
	cout<<conversion(n);
	return 0;
}
