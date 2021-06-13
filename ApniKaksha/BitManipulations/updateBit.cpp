//This program will update the bit at a given position. To update means simply to unset a bit and then sit the bit, all at the same position.


#include<iostream>
using namespace std;

int main(){

	//UnsetBit
	int n=5;						//The number whose bit we are checking. Binary is 0101.
	int i=2;						//The position from right at which we will unset the bit (starts from 0).

	int b=~(1<<i);					//Complement of left shifted 1. After left shifting 1, we get 0100, then after complementing we get, 1011.
	int s=b&n;						//'AND' operation for making the bit 0 at i's position.

	cout<<"After unsetting bit : "<<s<<endl;
	
	//SetBit
	int a=1<<i;						//1 is left shifted by i places. Here 1 after left shifting becomes 0100 from 0001,
	int r=a|s;						//'OR' operation is performed. Except the i position, the rest remains same. i will become 1.

	cout<<"After setting bit : "<<r<<endl;		//Becomes 0101 or 5.

	return 0;
}

