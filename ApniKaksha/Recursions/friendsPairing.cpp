/*
This program counts the number of ways n friends can remain single or pair up.

We send the no. of friends (n) into the function to be called.
For singles we reduce n by 1. But for pairs we reduce n by 2. It is important to note that when we pair up friends, we select one and then have (n-1) options to 
select his/her partner from. Thus, we multiply (n-1) to the recursive call. 
Suppose we have four friends A,B,C,D
1)In single option, let's say we pick out D and then A,B and C form groups as--
- A,B,C
- A,BC
- AB,C
- AC,B
So total = 4
2)In pairing option, let's say we pick A first, then we would pick either B,C or D. Let's say we again pick B. Then groups --
- C,D
- CD
But the thing is these two outcomes are dependent on us choosing B. Thus similarly we can choose C or D and we get 2 possibilities from each.
So total 2*3=6

Net total = 10

This is different from tiling as there all the places to be tiled are equal and we fill either two tiles (horizontally) or 1 tile (vertically). We cannot opt to 
place two tiles and then one tile at a single call. Its either 2 or 1. And it always fills from the start - not one in 3rd column and then another in 5th column.
*/



#include<iostream>
using namespace std;

int pairs(int n){
	if(n==0 || n==1 || n==2)
		return n;
		
	return pairs(n-1)+(n-1)*pairs(n-2);	
}

int main(){
	cout<<"No. of ways : "<<pairs(4)<<endl;
	return 0;
}
