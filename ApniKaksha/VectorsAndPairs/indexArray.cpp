/*
This program makes an array from a given array which contains its sorted indexes.

For example:
If array is 	: {10,16,7,14,5,3,12,9}
Sorted array 	: {3,5,7,9,10,12,14,16}

Then our answer : {4,7,2,6,1,0,5,3} --> Indicates the index of 10,16...9 in the sorted array.

Logic:
We use a vector of pairs to store the original elements and their index. This is sorted using sort() using an explicity defined function compare() to sort as per
the array element values (i.e. the first's value from the pair). Finally, we store the index of the values using the index of the original array elements or
in the sorted (which even though sorted, contains the original index information, because of the pair). 
*/





#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> p1, pair<int,int> p2){
	return p2.first>p1.first;	
}

int main(){
	int i;
	int arr[]={10,16,7,14,5,3,12,9};
	vector<pair<int,int>> v;
	for(i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
		v.push_back(make_pair(arr[i],i));
	}
	
	sort(v.begin(),v.end(),compare);

	for(i=0;i<v.size();i++){
		arr[v[i].second]=i;
	}

	for(i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
		cout<<arr[i]<<endl;
	}
	
	return 0;
}
