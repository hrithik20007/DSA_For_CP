/*
This program finds two unique numbers in an array where all numbers except those two, are present twice.

Logic:
When we XOR even number of similar elements we get 0, otherwise (i.e. if odd number of 1s and odd number of 0s) we get the number itself, i.e. 1.
Let's take an example: {2,4,6,7,4,5,6,2}
After we XOR all the elements, we get 7^5 as remianing. Let's consider that as 'x'.
Now x's binary will have a 1, which would indicate either 7 or 5 has 1 in that index.
We fin the index of that 1 and start a for loop seaching in the array which of the two elements has 1 in that position. We may find 7 like that.
After that we do 7^x to get 5. [Since we know a^b=c would mean a^c=b]
*/




#include<iostream>
using namespace std;

int main(){
	int i,x=1,pos=1,xorsum=0,n=8;
	int ar[n]={2,4,6,7,4,5,6,2};
	
	for(i=0;i<n;i++){
		xorsum=xorsum^ar[i];		// ^ operator stands for XOR here
	}
	
	while(1){						//x gives the position of 1 in the XOR result (Here, 2)
		x=x&xorsum;
		if(x==0){
			pos=pos<<1;
			x=pos;
		}
		else
			break;
	}

	int newxor=0;
	for(i=0;i<n;i++){				//Finds the numbers which has 1 at the same position as x (or here, 2)
		if(ar[i] && (ar[i] & x)){
			newxor=newxor^ar[i];	//Since there also other numbers who will give us bit 1 like 2 itself, we do newxor to eliminate those numbers so that only 7 is left
		}
	}

	cout<<"One number is : "<<newxor<<endl;
	cout<<"The other number is : "<<(newxor^xorsum)<<endl;
	
	return 0;
}
