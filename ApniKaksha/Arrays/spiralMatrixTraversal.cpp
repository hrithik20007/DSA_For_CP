/*
In this program, we have spirally traversed a matrix and printed its elements

Diagram of traversal--

      1
  --------> 
  ^---5-->|
4 |^--9->6| 2
  |<--7--v|
  <-------v
      3

*/


#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,i,j,k1,k2;
	int rs,re,cs,ce;
	cout<<"Enter row length : "<<endl;
	cin>>n;
	cout<<"Enter column length : "<<endl;
	cin>>m;
	int a[n][m];
	cout<<"Enter array elements : "<<endl;
	for(k1=0;k1<n;k1++){
		for(k2=0;k2<m;k2++){
			cin>>a[k1][k2];				
		}
	}

	rs=0;		//Keeps track of the starting row
	re=n-1;		//Keeps track of the ending row
	cs=0;		//Keeps track of the starting column
	ce=m-1;		//Keeps track of the ending column
	
	while(rs<=re && cs<=ce){

		//For stating row
		for(i=cs;i<=ce;i++)
			cout<<a[rs][i]<<" ";
		rs++;	

		//For ending column
		for(j=rs;j<=re;j++)
			cout<<a[j][ce]<<" ";
		ce--;
		
		//For ending row
		for(i=ce;i>=cs;i--)
			cout<<a[re][i]<<" ";
		re--;

		//For starting column
		for(j=re;j>=rs;j--)
			cout<<a[j][cs]<<" ";
		cs++;
	}

	return 0;
}
