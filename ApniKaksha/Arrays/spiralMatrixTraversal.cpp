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
	int n,m,i,j,k1,k2,f;
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
	f=0;		//Keeps track of the continuity of the for loops. Thus, a for loop can't be skipped and if it does, then the loop stops
	
	while(rs<=re && cs<=ce){

		//For stating row
		if(f==0){
			for(i=cs;i<=ce;i++)
				cout<<a[rs][i]<<" ";
			rs++;
			f=1;	
		}

		//For ending column
		else if(f==1){
			for(j=rs;j<=re;j++)
				cout<<a[j][ce]<<" ";
			ce--;
			f=2;
		}
		
		//For ending row
		else if(f==2){
			for(i=ce;i>=cs;i--)
				cout<<a[re][i]<<" ";
			re--;
			f=3;
		}

		//For starting column
		else{
			for(j=re;j>=rs;j--)
				cout<<a[j][cs]<<" ";
			cs++;
			f=0;
		}
	}

	return 0;
}
