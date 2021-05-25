//A sum and an array is given. We are finding a continious subarray whose elements add up to that sum.


#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,j,k,s,s1,n;
	cout<<"Enter sum : "<<endl;
	cin>>s;
	cout<<"Enter array length : "<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter array elements : "<<endl;
	for(k=0;k<n;k++){
		cin>>a[k];
	}
	for(i=0;i<n-1;i++){
		s1=a[i];
		j=i+1;
		while(s1+a[j]<=s){
			s1+=a[j];
			j+=1;
			if(j==n)
				continue;
		}	
		if(s1==s)
			break;
	}

	for(k=i;k<j;k++){
		cout<<a[k]<<" ";
	}
	
	return 0;
}
