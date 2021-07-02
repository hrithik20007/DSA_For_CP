/*
This program sorts an array by quick sort algorithm.

Logic:
We take a pivot and push all the greater numbers before it to its right side. Now we do the same for the arrays to the left and right side of the pivot. 
We select the pivot by the pivot function.
In the pivot function, we initially take our pivot as the value of the array element at the extreme right. i is a variable which will point to a value before the 
leftmost array element. j will point to the leftmost array element. We start a j-loop from its initial position till the element just before the rightmost element.
We increase i only if j's value is lower than p's value. We swap i and j's value when they are not equal. 
Finally, we will see that i+1 holds the initial p's value (the rightmost one) and all the higher values are shifted to its right. We, then send the (i+1)th index, 
which serves as the pivot to break the array into two parts.
*/





#include<iostream>
using namespace std;

int pivot(int arr[], int l, int r){
	int p=arr[r];
	int j,t=0,i=l-1;
	for(j=l;j<r;j++){
		if(arr[j]<p){
			i++;
			t=arr[j];
			arr[j]=arr[i];
			arr[i]=t;
		}
	}
	t=arr[r];
	arr[r]=arr[i+1];
	arr[i+1]=t;
	return i+1;
}

void sort(int arr[], int l, int r){
	if(l<r){
		int p=pivot(arr,l,r);
		sort(arr,p+1,r);
		sort(arr,l,p-1);
	}
	return;
}

int main(){
	int i,l,r;
	int arr[7]={6,3,9,5,2,8,7};
	l=0;
	r=6;
	sort(arr,l,r);
	for(i=0;i<r+1;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
