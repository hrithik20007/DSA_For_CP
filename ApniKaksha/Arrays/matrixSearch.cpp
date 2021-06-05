/*
In this program, we are searching for a given number. 

We can use two for-loop approach where the time complexity will be O(n*m).
OR
We may use the approach used below. That is, we start from top right and move either left or down. Left to go lower and down to go higher in values.
However, this approach works with only a few matrices -- which increases from left to right and top to bottom.
An example 2D array would be:
1  4  7  11
2  5  8  12
3  6  9  16
10 13 14 17
*/




#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,t,p=0,f=0,k1,k2;
	cout<<"Enter row length : "<<endl;
	cin>>n;
	cout<<"Enter column length : "<<endl;
	cin>>m;
	cout<<"Enter target : "<<endl;
	cin>>t;
	int a[n][m];
	cout<<"Enter array elements : "<<endl;
	for(k1=0;k1<n;k1++){
		for(k2=0;k2<m;k2++){
			cin>>a[k1][k2];
		}
	}
	
	//Searching
	int i=0,j=m-1;
	while(j>=0 && i<=n-1){
		if(a[i][j]==t){
			p=1;
			break;
		}
		else if(a[i][j]<t)
			i+=1;
		else
			j-=1;
	}	


	//Output matrix
	if(p==1)
		cout<<"Found!";
	else
		cout<<"Not Found";
		
	return 0;
}
