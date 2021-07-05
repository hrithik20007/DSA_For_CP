/*
This program counts the number of inversions in an array. Two elements a[i] and a[j] form an inversion if a[i]>a[j] and i<j. That is, if a larger number appears
before a smaller number.

Logic:
In merge sort, an array is divided into equal halves until l<r becomes false. Then we start merging the equal halves. For merging, we use two pointers at the
beginning of two subarrays and we compare their values. We take the shorter value first and save it into our array, increamenting its pointer by 1 and doing the 
same for the rest of the array items.

While checking for the smaller number from the two arrays, if the smaller number is at the second array, that means it is an inversion. Not only that, but that means
all the numbers after that number in the first array will also cause an inversion with the number in the second array (since the first and second array is sorted).
Thus, instead of increasing by 1. We increase c by the number of elements present in the first array from that number (including the number). 

For example, if two arrays are--
{3,5,6,9} and {1,2,7,8}

For the initial pointers, the first one will point to 3 (from 1st array) and the second will point to 1 (from 2nd array). As 3>1, it is an inversion. But 
5,6,9 from 1st array also form an inverse with 1. Thus no. of inversions increase by n1-i (i.e. 4-0 = 4).
*/







#include<iostream>
using namespace std;

int merge(int arr[],int l,int mid,int r){
	int n1=(mid+1)-l;				//Size of the first array
	int n2=r-mid;					//Size of the second array
	int c=0;

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
			c+=n1-i;				//INCREASES THE COUNT 	
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

	return c;
}

int sort(int arr[],int l,int r){
	int c=0;							//Keeps count of the number of inversions
	
	if(l<r){
		int mid=(l+r)/2;
		c+=sort(arr,l,mid);
		c+=sort(arr,mid+1,r);

		c+=merge(arr,l,mid,r);			//This is proceeded to, when the next recursive call encounters l<r condition which returns false. So the sort() functions return.
	}

	return c;
}

int main(){
	int arr[]={3,5,6,9,1,2,7,8};
	cout<<sort(arr,0,7)<<endl;
	return 0;
}
