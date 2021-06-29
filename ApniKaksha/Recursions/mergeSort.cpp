/*
This program sorts a given array using Merge Sort technique.

Logic:
In merge sort, an array is divided into equal halves until l<r becomes false. Then we start merging the equal halves. For merging, we use two pointers at the
beginning of two subarrays and we compare their values. We take the shorter value first and save it into our array, increamenting its pointer by 1 and doing the 
same for the rest of the array items.
*/







#include<iostream>
using namespace std;

void merge(int arr[],int l,int mid,int r){
	int n1=(mid+1)-l;				//Size of the first array
	int n2=r-mid;					//Size of the second array

	int a[n1];
	int b[n2];
	int i,j,k;
	
	for(i=0;i<n1;i++)				//Creating the first subarray
		a[i]=arr[l+i];

	for(i=0;i<n2;i++)				//Creating the second subarray
		b[i]=arr[mid+1+i];

	i=0;							//Initial pointer for the first sub-array
	j=0;							//Initial pointer for the second sub-array
	k=l;							//Array index where merging starts to takes place.
	while(i<n1 && j<n2){			//Merging
		if(a[i]<=b[j]){
			arr[k]=a[i];
			i++;
			k++;
		}
		else{
			arr[k]=b[j];
			j++;
			k++;
		}
	}

	while(i<n1){					//In case the first array's pointer didn't reach the end.
		arr[k]=a[i];
		i++;
		k++;
	}
	while(j<n2){					//In case the seccond array's pointer didn't reach the end.
		arr[k]=b[j];
		j++;
		k++;
	}
}

void sort(int arr[],int l,int r){
	if(l<r){
		int mid=(l+r)/2;
		sort(arr,l,mid);
		sort(arr,mid+1,r);

		merge(arr,l,mid,r);			//This is proceeded to, when the next recursive call encounters l<r condition which returns false. So the sort() functions return.
	}
}

int main(){
	int arr[]={6,3,9,5,2,8,7,1};
	sort(arr,0,7);

	for(int i=0;i<8;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
