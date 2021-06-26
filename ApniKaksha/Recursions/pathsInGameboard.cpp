/*
This program counts the number of possible paths we can take from the starting point of a board game to an ending point.

Logic;
We can move either in single steps, double steps, triple, in combinations and so on. So we take a for loop for the recursive steps. The base case is that we return 
0 when we go beyond 'e' or ending point. We return 1 if we reach the ending point exactly. We have started the for loop from s+1, since starting from s would mean
that one part of the for loop will keep sending the same starting point as s and the recursion depth will exceed memory limit. We store the total 1s in r, which 
gives the total number of paths.
*/




#include<iostream>
using namespace std;

int board(int s,int e){
	int i,r=0;
	if(s>e)
		return 0;
	if(s==e)
		return 1;

	for(i=s+1;i<=e;i++){
		r+=board(i,e);
	}
	return r;
}

int main(){
	cout<<board(0,4)<<endl;
	return 0;
}
