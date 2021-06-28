/*
This program returns true for generating a 2D array path which gives 1 in all those elements which lead to its goal (bottom-right). The given maze has obstacles as 0s.

Logic:
We use a boolean function isSafe() to check whether the current element is an obstacle or not. If not, then we recursively again call the maze() function which 
generates the answer 2D array. To do that, we call itself two times - one for going down and another for going right. If both directions face an obstacle, we 
return back to the previous call as false. We also erase the generated 1 in its path. This concept is backtracking.
Backtracking is an algo for recursive solutions, by trying to build every possible solution increamentally and removing those solutions that fail to satisfy the
constraints of the problem at any point of time.  
For the answer 2D array, we have used a pointer array to change the actual array instead of a value. The given array, however, is explicitly mentioned. If we want to
input the given array, then we have to uncomment the commented portion.
*/



#include<iostream>
using namespace std;

bool isSafe(int grid[][5],int i, int j, int n){
	if(i<n && j<n && grid[i][j]==1)
		return true;
	return false;	
}

bool maze(int** ans, int grid[][5], int i, int j, int n){
	if(i==n-1 && j==n-1){
		ans[i][j]=1;
		return true;
	}

	if(isSafe(grid,i,j,n)){
		ans[i][j]=1;
		if(maze(ans,grid,i+1,j,n))
			return true;
		if(maze(ans,grid,i,j+1,n))
			return true;
		ans[i][j]=0;					//This condition is only reached if all the above conditions were false, thus backtracking occurs and we change the path's
										//value to 0./
		return false;					// "
		}
	return false;						// "
}

int main(){
	int n=5,i,j;
	int grid[5][5]={{1,0,1,0,1},{1,1,1,1,1},{0,1,0,1,0},{1,0,0,1,1},{1,1,1,0,1}};

	/*
	int **grid=new int*[n];				//If we want to use an input array as pointer
	for(i=0;i<n;i++){
		grid[i]=new int[n];
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>grid[i][j];
		}
	}
	*/

	int **ans=new int*[n];				//Pointer solution array
	for(i=0;i<n;i++){
		ans[i]=new int[n];
		for(j=0;j<n;j++){
			ans[i][j]=0;
		}
	}

	if(maze(ans,grid,0,0,n)){			//Only returns true if all the conditions were satisfied ,i.e. if it reaches the bottom right
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				cout<<ans[i][j]<<" ";
			}
			cout<<endl;
		}
	}
		
	
	return 0;
}
