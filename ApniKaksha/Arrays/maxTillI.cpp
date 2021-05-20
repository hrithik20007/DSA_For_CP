//Displays the maximum array value(a number) uptil i(i.e. upto a particular array position).


#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,k,m=-999999;
	cout<<"Enter array length : "<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter array elements : "<<endl;
	for(k=0;k<n;k++){
		cin>>a[k];
	}
	for(i=0;i<n;i++){
		m=max(m,a[i]);
		cout<<m<<" ";
	}
	return 0;
}
