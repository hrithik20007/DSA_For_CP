//Decimal to Binary Conversion


#include<bits/stdc++.h>
using namespace std;

void conversion(int x){
	int d,j,i=0;
	int binary[32];
	while(x>0){
		d=x%2;
		binary[i]=d;
		i+=1;
		x=x/2;
	}
	for(j=i-1;j>=0;j--){
		cout<<binary[j];
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
