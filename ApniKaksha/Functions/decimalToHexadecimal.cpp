//Decimal to Hexadecimal Conversion


#include<bits/stdc++.h>
using namespace std;

void conversion(int x){
	int d,j,i=0;
	string hexa[32];
	while(x>0){
		d=x%16;
		if(d<10)
			d+='0';		//Changes the integer into a chracter integer
		else
			d=d-10+'A';		//Changes integers b/w 10-15 to alphabets A,B,C,D,E or F
		hexa[i]=d;
		i+=1;
		x=x/16;
	}
	for(j=i-1;j>=0;j--){
		cout<<hexa[j];
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
