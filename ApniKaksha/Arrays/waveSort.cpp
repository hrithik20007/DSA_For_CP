/*
This program sorts an array using Wave Sort. That means in the final array, every element at the odd indexes will be the smaller than its previous and next element.

Logic:
We start a for loop from the second element till the last. We check if the previous and next element are smaller than the current element. If it is, then we 
swap the elements.
*/





#include<bits/stdc++.h>
using namespace std;

void swap(int arr[], int mid, int x){
	int t=arr[x];
	arr[x]=arr[mid];
	arr[mid]=t;

	return;
}

void wave(int arr[], int n){
	int i;
	for(i=1;i<n;i+=2){

		if(arr[i]>arr[i-1])				//If the previous element is smaller
			swap(arr,i,i-1);

		if(i<=n-2 && arr[i]>arr[i+1])	//If the next element is smaller
			swap(arr,i,i+1);
	}
	
	return;
}

int main(){
	int i,n=7;
	int arr[]={1,3,4,7,5,6,2};
	wave(arr,n);

	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}
