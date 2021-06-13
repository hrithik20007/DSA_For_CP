//This program will set and unset a bit at the given position of a number. Setting a bit means making the bit at that particular index 1. Unsetting means making it 0. 


#include<iostream>
using namespace std;

int main(){

	//SetBit
	int n=3;						//The number whose bit we are checking. Binary is 0011.
	int i=2;						//The position from right at which we will set the bit (starts from 0).

	int a=1<<i;						//1 is left shifted by i places. Here 1 after left shifting becomes 0100 from 0001,
	int r=a|n;						//'OR' operation is performed. Except the i position, the rest remains same. i will become 1.

	cout<<"After setting bit : "<<r<<endl;		//Becomes 0111 or 7.


	//UnsetBit
	int j=1;						//The position from right at which we will unset the bit (starts from 0).

	int b=~(1<<j);					//Complement of left shifted 1. After left shifting 1, we get 0010, then after complementing we get, 1101.
	int s=b&n;						//'AND' operation for making the bit 0 at j's position.

	cout<<"After unsetting bit : "<<s<<endl;
	return 0;
}
