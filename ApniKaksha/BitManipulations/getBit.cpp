//This program will give us the bit of a binary number at a given position. 


#include<iostream>
using namespace std;

int main(){
	int n=3;						//The number whose bit we are checking. Binary is 0011.
	int i=2;						//The position from right at which we are checking the bit (starts from 0).

	int a=1<<i;						//1 is left shifted by i places. Here 1 after left shifting becomes 0100 from 0001,
	int r=a&n;						//'AND' operation is performed. Except the i position, all becomes 0. Whether i becomes 0 or not 1 depends on the bit at i.

	if(r==0)
		cout<<"It is 0"<<endl;		
	else
		cout<<"It is 1"<<endl;
	
	return 0;
}
