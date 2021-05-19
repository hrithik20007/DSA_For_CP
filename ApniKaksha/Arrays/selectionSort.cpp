/*
Selection Sort

Works on the logic to bring the smallest no. in front with every iteration.

Example: 
12 45 23 51 19 8

Our Work:
12 45 23 51 19 8 
8 . . . . .
8 12 . . . .
8 12 19 . . .
8 12 19 23 . .
8 12 19 23 45 51 

We take the i b/w 0 to (n-1) and j b/w 1 to n. So the first no.(i) always compares with the next numberS (j). If it is smaller,
it is placed in the place of i.
*/



#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,j,k,t=0,n;
	cout<<"Enter array length : "<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter array elements : "<<endl;
	for(k=0;k<n;k++){
		cin>>a[k];
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if (a[i]>a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(k=0;k<n;k++){
		cout<<a[k]<<" ";
	}
	return 0;
}
