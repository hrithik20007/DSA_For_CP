/*
Bubble Sort

Works on the logic to push the largest no. at the back after every iteration.

Example: 
12 45 23 51 19 8

Our Work:
12 45 23 51 19 8 
12 . . . . 51
12 . . . 45 51
12 . . 23 45 51
12 8 19 23 45 51
8 12 19 23 45 51 

We take the i b/w 1 to n and j b/w 0 to n-i. So i is only used to decrease the ending length in the j loop. That means as we get
51 at the end, we leave it alone and check the array till before it and so on. As we traverse the j loop, we swap any pair when
it isnt in the ascending order.
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
	for(i=1;i<n;i++){
		for(j=0;j<n-i;j++){
			if (a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(k=0;k<n;k++){
		cout<<a[k]<<" ";
	}
	return 0;
}
