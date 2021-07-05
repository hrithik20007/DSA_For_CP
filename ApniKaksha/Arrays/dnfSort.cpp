/*
This program sorts an array using DNF Sort. The array must have 3 distinct elements for this.

Logic:
We use a pointer called mid which starts from the lowest index and two pointers l and h, which are at lower and higher extremes respectively.
We interchange mid and l's value if arr[mid]=0 and increase l and mid by 1. 
We interchange mid and h's value if arr[mid]=2 and decrease h by 1. We do not change mid, as the new arr[mid] may be 0, which would need interchanging with l.
Thus, there is an unknown element when interchanging with h. That is not the case during interchanging with l, as mid has already traversed over that by then. 
*/





#include<bits/stdc++.h>
using namespace std;

void swap(int arr[], int mid, int x){
	int t=arr[x];
	arr[x]=arr[mid];
	arr[mid]=t;

	return;
}

void dnf(int arr[], int n){
	int l=0;
	int h=n-1;
	int mid=0;

	while(mid<=h){
		if(arr[mid]==0){
			swap(arr,mid,l);
			l+=1;
			mid+=1;
		}
		else if(arr[mid]==2){
			swap(arr,mid,h);
			h-=1;
		}
		else
			mid+=1;
	}	

	return;
}

int main(){
	int i,n=10;
	int arr[]={1,1,2,0,0,1,2,2,1,0};
	dnf(arr,n);

	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}
