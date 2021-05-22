/*
Arithmetic array is one where the difference between the consecutive elements remains the same and contains atleast two elements.
Example: [9,10], [3,3,3], [9,7,5,3]

Subarray is any continuous and sequential part of the array
Subsequence may or may not be continuous but it is a sequential part of the array.


I have output the subarray itself. If you want to output its length, just output the variable 'l' at the end  as you'll find out.
*/



#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,j,k,l=0,p=0,m=2;
	cout<<"Enter array length : "<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter array elements : "<<endl;
	for(k=0;k<n;k++){
		cin>>a[k];
	}
	for(i=1;i<n-1;i++){
		if(a[i]-a[i-1]==a[i+1]-a[i]){
			m+=1;
		}
		if(l<m){	//l will store the maximum no. of elements in the arithmetic subarray
			l=m;
			p=i+1;	//p defines the limiting element index of the required subarray
		}
		if(a[i]-a[i-1]!=a[i+1]-a[i]){
			m=2;
		}
	}
	for(j=(p-l)+1;j<=p;j++){	
		cout<<a[j]<<" ";
	}
	return 0;
}
