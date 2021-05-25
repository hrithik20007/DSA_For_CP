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


/*
In the above solution, the method works for both sorted and unsorted arrays. But if we are given a sorted array and it is mentioned
so, then we can futher optimise our solution and have O(n) time complexity instead of O(n^2).


int main(){
	int i,j,k,p,q,s,s1,n;
	cout<<"Enter sum : "<<endl;
	cin>>s;
	cout<<"Enter array length : "<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter array elements : "<<endl;
	for(k=0;k<n;k++){
		cin>>a[k];
	}

	p=0;
	q=1;
	s1=a[p];
	while(s1<=s && q<n){
		s1+=a[q];
		q+=1;
		if(s1==s)
			break;
	}
	while(s1>s){
		s1-=a[p];
		p+=1;
	}

	for(k=p;k<q;k++){
		cout<<a[k]<<" ";
	}
	
	return 0;
}
*/
