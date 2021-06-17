/*
This is an algorithm to find all the prime numbers within a given range. (Here, being 2 to 100)

We take an array of 100 elements all initialised to 0 and we will mark the multiples of the beginning elements as 1.
We will use a j loop to start marking 1 from i**2, as all the multiples before i**2 (like i*2 or i*3) will already have been marked 1 by the j loops before it.
For example, 2 will start marking from 4,6,8,10 until 100. We can see that 5's multiple (i.e. 10) has already been marked as 1.
While printing, we will print the index (which represent the numbers itself) of those array elements which are not 1. 
*/


#include<iostream>
using namespace std;

int main(){
	int arr[100]={0};
	int i,j;

	for(i=2;i<=100;i++){
		if(arr[i]==0){
			for(j=i*i;j<=100;j+=i){			//Marking all the index's multiples as 1
				arr[j]=1;
			}
		}
	}

	for(i=2;i<=100;i++){					//Printing the prime numbers
		if(arr[i]==0)
			cout<<i<<endl;
	}
	
	return 0;
}
