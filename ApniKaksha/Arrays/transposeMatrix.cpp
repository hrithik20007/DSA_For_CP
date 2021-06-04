/*
We have been given a matrix. Now we need to find its transpose.

Transpose means to reverse the matrix about its main diagonal (i.e. left-right diagonal).
That would essentially mean to interchange the (row,column) order of all elements.
*/



#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,k1,k2;
	cout<<"Enter row length : "<<endl;
	cin>>n;
	cout<<"Enter column length : "<<endl;
	cin>>m;
	int a[n][m];
	int b[m][n];
	cout<<"Enter array elements : "<<endl;
	for(k1=0;k1<n;k1++){
		for(k2=0;k2<m;k2++){
			cin>>a[k1][k2];
		}
	}

	//Transposing
	for(k1=0;k1<n;k1++){
		for(k2=0;k2<m;k2++){
			b[k2][k1]=a[k1][k2];
		}
	}

	//Output matrix
	for(k1=0;k1<m;k1++){
		for(k2=0;k2<n;k2++){
			cout<<b[k1][k2]<<" ";
		}
		cout<<endl;
	}
		
	return 0;
}
