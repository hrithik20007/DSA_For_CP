/*
This program finds a unique number in an array where all numbers except one, are present thrice.

Logic:
We initialise an array of size 32. The indexes of the array will represent a set bit index. For example, 1 will represent 10, 3 will represent 1000.
Now we check the elements in the given array who have 1 in the same position as the bit index. If we find such element, we raise the element of the bit array at that
index by 1. Since an element is repeated thrice, if one satisfies it, that means the other will too. Thus we will get a multiple of 3 as bit array elements.
If we dont, that means at those indexes the unique element's bit is 1.
Thus all we have to do is to setbit at positions of the array where the element is not a multiple of 3.  
*/





#include<iostream>
using namespace std;

int main(){
	int i,xorsum=0,n=13,x,p,j,sum=0;
	int ar[n]={1,3,2,3,4,4,4,7,2,1,1,3,2};
	int bit[32];

	//Initialising an array of size 32
	for(i=0;i<32;i++){
		bit[i]=0;
	}

	//Updating the bit array as per the number of elements with 1 at the i'th index (i.e. the setBit index)
	for(i=0;i<32;i++){
		x=1<<i;
		for(j=0;j<n;j++){
			if(ar[j] && (ar[j] & x)){
				bit[i]++;
			}
		}
		/*
		if(bit[i]%3!=0)		//If the number of elements satisfying the i'th index is a multiple of 3, then the bit element is changed to 0, otherwise 1 
			bit[i]=1;
		else
			bit[i]=0;
		*/
		if(bit[i]%3!=0){	//Sets bit at the indexes where the bit is not a multiple of 3
			sum=sum|x;
		}
	}

	/*
	//Finding the numbers	
	int s,sum=0;
	for(i=0;i<32;i++){
		s=1<<i;
		if(bit[i]==1)
			sum+=s;
	}
	*/
	
	cout<<"The required number is : "<<sum<<endl;
	
	return 0;
}
