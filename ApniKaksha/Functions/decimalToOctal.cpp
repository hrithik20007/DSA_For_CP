//Decimal to Octal Conversion


#include<bits/stdc++.h>
using namespace std;

void conversion(int x){
	int d,j,i=0;
	int octal[32];
	while(x>0){
		d=x%8;
		octal[i]=d;
		i+=1;
		x=x/8;
	}
	for(j=i-1;j>=0;j--){
		cout<<octal[j];
	}
	return;
}
int main(){
	int a;
	cout<<"Enter decimal :"<<endl;
	cin>>a;
	conversion(a);
	return 0;
}
