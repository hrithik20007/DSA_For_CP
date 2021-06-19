/*
This is an algorithm for the prime factorisation of a number using the concept of sieve of eratosthenes.

We take an array of 100 elements all initialised as their indexes and we will mark the multiples of the beginning elements as their smallest factors.
We will use a j loop to start marking 1 from i**2, as all the multiples before i**2 (like i*2 or i*3) will already have been marked by the j loops before it.
For example, 2 will start marking from 4,6,8,10 until 100. We can see that 5's multiple (i.e. 10) has already been marked as before.
While printing, we will print the prime factors at each stage of the factorisation. 
*/


#include<iostream>
using namespace std;

int main(){
	int n=100;
	int arr[n]={0};
	int i,j;

	for(i=2;i<=n;i++){
		arr[i]=i;						//Initialises all elements with their indexes
	}
	
	for(i=2;i<=n;i++){
		if(arr[i]==i){
			for(j=i*i;j<=n;j+=i){		//Instead of marking 1 in their index's multiples, we replace the value with their smallest prime factors
				if(arr[j]==j)			//For cases like 50, which is divisible by both 2 and 5. If this condition is not placed, 50 will be replaced by 2 and then 5
										//instead of sticking with 2.
					arr[j]=i;
			}
		}
	}

	while(n!=1){						//For n=100, it displays the factors like 2->2->5->5
		cout<<arr[n]<<endl;
		n=n/arr[n];
	}
	
	return 0;
}
