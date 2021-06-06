//To check if the input character array (not string as string's length is not pre-defined) is a palindrome or not.


#include<iostream>
using namespace std;

int main(){
	int i,n;
	bool f=1;
	cout<<"Enter string length"<<endl;
	cin>>n;

	cout<<"Enter string"<<endl;
	char c[n+1];
	cin>>c;

	for(i=0;i<n;i++){
		if(c[i]!=c[n-1-i]){
			f=0;
			break;
		}
	}

	if(f==1)
		cout<<"Palindrome";
	else
		cout<<"Not Palindrome";

	return 0;
}
