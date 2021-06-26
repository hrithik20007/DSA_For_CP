/*
This program counts the number of possible paths we can take from top left to bottom right of a square matrix.

Logic;
We either move right or down recursively. The paths which don't reach bottom right and instead go towards the boundaries return 0, otherwise they return 1.
We add these numbers and that's how we will get the number of 1s or the paths which reach bottom right.
*/




#include<iostream>
using namespace std;

int path(int i,int j,int n){
	if(i>=n || j>=n)
		return 0;
	if(i==n-1 && j==n-1)
		return 1;

	return path(i+1,j,n)+path(i,j+1,n);
}

int main(){
	cout<<path(0,0,3)<<endl;
	return 0;
}
