/*
Displays the sum of all possible subarrays of an input array

Example:
For [1,2,2]
Subarrays - [1] [1,2] [1,2,2] [2] [2,2] [2]
Sum-         1    3      5     2    4    2
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,j,s=0,k;
	cout<<"Enter array length : "<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter array elements : "<<endl;
	for(k=0;k<n;k++){
		cin>>a[k];
	}
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			s+=a[j];
			cout<<s<<" ";	
		}
		s=0;
	}
	return 0;
}
