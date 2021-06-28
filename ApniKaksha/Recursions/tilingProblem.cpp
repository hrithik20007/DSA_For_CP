/*
This program counts the number of ways to tile the given board of size "2*n" using tiles of size "2*1".

We send the no. of columns (n) into the function to be called.
We can either place a tile vertically (in which case n reduces by 1) or horizontally (in which n reduces by 2). In case of horizontally, we are putting two tiles
next to each other, so it really becomes one 2*2 tile. When the number n becomes either 1 or 2, we return n.
For 2 --> We can place the final two places as two horizontal tiles or two vertical tiles. So we have two possibilities.
For 1 --> We can only place a vertical tile for the final column. So there's only one way to fill it up.
*/



#include<iostream>
using namespace std;

int tiles(int n){
	if(n==1 || n==2)
		return n;
		
	return tiles(n-1)+tiles(n-2);	
}

int main(){
	cout<<"No. of ways : "<<tiles(4)<<endl;
	return 0;
}
