/*
This program prints the first and last occurence of an integer from an integer array.

Logic:
For the first occurence, we are simply checking for the target first. If the target is found, then the array index is returned and as the recursion 
goes back, the same index is returned; otherwise we return -1.
For the last occurence, we reach the end of the array first and start returning -1. Then while returning, we are checking for the target, along with an and condition 
which checks the returned value as well. If the target is found and the returned value is -1, then we start returning the index. Later on, the target maybe 
found again but the returned value won't be -1 (i.e. it will be the index of the last occurence), so the returned value won't be updating. 
*/


#include<iostream>
using namespace std;

int first(int a[],int n, int i,int target){
	if(i==n)
		return -1;
	if(a[i]==target)
		return i;
	int r=first(a,n,i+1,target);
	return r;
}

int last(int a[],int n, int i,int target){
	if(i==n)
		return -1;
	int r=last(a,n,i+1,target);
	if(a[i]==target && r==-1)
		r=i;
	return r;
}

int main(){
	int n=7;
	int a[n]={4,2,1,2,5,2,7};
	int target=2;
	
	if(first(a,n,0,target)!=-1)
		cout<<"First occurence at : "<<first(a,n,0,target)<<endl;
	else
		cout<<"Not found"<<endl;
	if(last(a,n,0,target)!=-1)
		cout<<"Last occurence at : "<<last(a,n,0,target)<<endl;

	return 0;
}
