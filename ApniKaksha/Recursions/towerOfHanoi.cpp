/*
This problem solves the Tower of Hanoi problem. 
The Tower of Hanoi consists of three rods - A, B and C. We have n rings around rod A, which are all of different radiuses, the smallest being at the top and the 
largest being at the bottom. We have to move them from source A to destination C using the helper rod B, one by one, such that a ring with smaller radius 
always stays on top of a larger ring, in case two or more rings are present on a single rod.

Logic:
1)For 1 ring
-> We simply move the ring from A to C without needing B.
2)For 2 rings
-> We move 1 ring from A to B using C. (C is actually not needed to move it from A to B)
-> We move 1 ring from A to C. (i.e. the next ring)
-> We move 1 ring from B to C using A.

3)For 3 rings
-> We move 2 rings from A to B using C. (We already know how to move 2 rings from one rod to another from the previous example of 2 rings)
-> We move 1 ring from A to C. (i.e. the next ring)
-> We move 2 rings from B to C using A.

Thus, we can write the function as --
-> We move (n-1) rings from A to B using C. (i.e. from source to helper using destination)
-> We move 1 ring from A to C. (i.e. i.e. from source to destination)
-> We move (n-1) rings from B to C using A. (i.e. from helper to destination using source)
*/



#include<iostream>
using namespace std;

void hanoi(int n,char src,char dest,char helper){
	if(n==0)
		return;

	hanoi(n-1,src,helper,dest);
	cout<<"From "<<src<<" to "<<dest<<endl;
	hanoi(n-1,helper,dest,src);
	return;
}

int main(){
	hanoi(3,'A','C','B');
	return 0;
}
