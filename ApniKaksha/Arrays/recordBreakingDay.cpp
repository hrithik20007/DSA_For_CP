/*
Find the number of record breaking days in an aray.

A record breaking day is one where -
1) The value is strictly greater than the previous ones
2) Strictly greater than the following value
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,k,m,s=0;
	cout<<"Enter array length : "<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter array elements : "<<endl;
	for(k=0;k<n;k++){
		cin>>a[k];
	}
	m=a[0];
	for(i=1;i<n-1;i++){
		if(a[i]>m && a[i]>a[i+1])
			s+=1;
		m=max(m,a[i]);
	}
	cout<<"Number of record breaking days : "<<s;
	return 0;
}
