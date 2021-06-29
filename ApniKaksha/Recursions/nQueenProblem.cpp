/*
This program places n queens in a n*n chess board, such that no queen is able to cut any other queen. 

Logic:
We send every column index for a particular row to the isSafe() function to see whether there is any queen present diagonally (left and right) or in the same column
as the queen position we have sent to be checked. It is important to note that we do so until that row, which means we won't check for the later rows and diagonals.
If isSafe() returns true, then we place the queen in that position and recursively call nQueen() again. If a queen cannot be placed in any column in a particular
row, then the function returns false and we backtrack to the previous call, deleting the queen in that column for that row and check the other columns of that row.
This continues until we get a suitable position for all the queens.
*/




#include<iostream>
using namespace std;

bool isSafe(int** grid,int i, int j, int n){
	int r,c;
	for(r=0;r<i;r++){					//For checking the same column
		if(grid[r][j]==1)
			return false;
	}
	
	r=i;
	c=j;
	while(r>=0 && c>=0){				//For checking along the left diagonal
		if(grid[r][c]==1)
			return false;
		r--;
		c--;
	}

	r=i;
	c=j;
	while(r>=0 && c<n){					//For checking along the right diagonal
		if(grid[r][c]==1)
			return false;
		r--;
		c++;
	}

	return true;	
}


bool nQueen(int** grid, int i, int n){
	if(i==n)
		return true;					//Base Case --> when the row variable exceeds the ending row index

	int c;								
	for(c=0;c<n;c++){				
		if(isSafe(grid,i,c,n)){
			grid[i][c]=1;
			if(nQueen(grid,i+1,n)==true)
				return true;
			grid[i][c]=0;				//Backtracks in case the nQueen function returns false for a position of a queen
		}
	}
	return false;
}


int main(){
	int n,i,j;
	cout<<"Enter n for the n*n board : "<<endl;
	cin>>n;

	int **grid=new int*[n];				//Pointer solution array
	for(i=0;i<n;i++){
		grid[i]=new int[n];
		for(j=0;j<n;j++){
			grid[i][j]=0;
		}
	}

	if(nQueen(grid,0,n)){				//Only returns true if all the conditions were satisfied ,i.e. if all the queens are placed in correct positions
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				cout<<grid[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	
	return 0;
}
