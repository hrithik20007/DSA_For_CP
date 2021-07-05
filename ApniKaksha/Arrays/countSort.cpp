/*
The program sorts an array by using the Count Sort method. It works best if the no. of distinct elements are limited and close to each other in value.

Logic:
We make an array c with the final index value same as the highest element value in the given array (arr). For example, here arr's highest value is 6. So c's indexes 
will be from 0 to 6. Each index will store the number of times it has occured in arr. Finally, we turn c into a cumulative array (the previous element's value + the
current element's value).
After that, we iterate through all the elements of arr. We, decrease the value at that value's index in c by 1, and use that as index for ans (the answer array), to
put the element. 
For example,
arr={1,3,2,3,4,1,6,4,3}
c={0,2,1,3,2,0,1}
Cumulative c={0,2,3,6,8,8,9}

When iterating through arr, we first encounter 1. We decrease c[1] by 1, which becomes 1. We use this as am index i.e. ans[1] to put the element of arr.
That is, arr[1]=1.
We continue this for the other elements.
*/





#include<bits/stdc++.h>
using namespace std;

void countSort(int arr[], int n){
	int i,m=arr[0];
	for(i=1;i<n;i++){
		m=max(m,arr[i]);
	}

	int c[m+1]={0};
	for(i=0;i<n;i++){
		c[arr[i]]+=1;
	}

	for(i=1;i<=m;i++){
		c[i]+=c[i-1];
	}	

	int ans[n];
	for(i=0;i<n;i++){
		ans[--c[arr[i]]]=arr[i];
	}

	for(i=0;i<n;i++){
		cout<<ans[i]<<" ";
	}
	
}

int main(){
	int n=9;
	int arr[n]={1,3,2,3,4,1,6,4,3};
	countSort(arr,n);
	return 0;
}
