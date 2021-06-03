/*
This program outputs true when a pair of elements exist which add up to a given sum; otherwise false.

We have used used two-pointer approach. However, it is important to note that it works in sorted arrays only. If we have an unsorted array, we can use the brute
force method using two loops (i.e. O(n^2)). We can also sort the array first and then use this approach. But in that case we should implement a sorting mechanism
using O(n) or less, otherwise there is no use of using this technique as time complexity will still end up being O(n^2).
*/



#include<bits/stdc++.h>
#include<climits>
using namespace std;

int main(){
	int n,j,r=0,k,t,p1,p2;
	cout<<"Enter target sum : "<<endl;
	cin>>t;
	cout<<"Enter array length : "<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter array elements : "<<endl;
	for(k=0;k<n;k++){
		cin>>a[k];
	}
	p1=0;
	p2=n-1;
	while(p1<p2){
		if(a[p1]+a[p2]==t){
			r=true;
			break;
		}
		else if(a[p1]+a[p2]<t)
			p1+=1;
		else
			p2-=1;	
	}
	
	if(r==1)
		cout<<"Pairs Exist"<<endl;
	else
		cout<<"Pairs Don't Exist"<<endl;
	return 0;
}
