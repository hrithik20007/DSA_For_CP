/*
Print if the given array in order-
1) One from the beginning to the end.
2) Another from the end to the beginning.

Logic:
While printing from first to last, the recursion occurs first (i.e. the function calls itself first). So, the array reaches from its last index to its first index.
Only after that do we return (without any value) and find the print statement. Thus, the first array element is printed and the function returns again. This
process repeats until the function reaches back its initial stage, printing all the elements from first to last.

While printing from last to first, the recursion occurs after (i.e. the function calls itself later) encountering the print statement. So the array elements are 
printed from last to first. When the last stage of recursion is reached, it simply returns back without printing anything.
*/



#include<iostream>
using namespace std;

void dec(int a[],int n){		//In this case, the element is first printed and then the function calls itself
	if(n==0)
		return;

	cout<<a[n-1]<<endl;
	dec(a,n-1);
	//return;					//We need not write return in case of void functions
}

void inc(int a[],int n){		//In this case, the function first calls itself, thus at the end the last array element (or the 0th-indexed) is printed first and so on
	if(n==0)
		return;

	inc(a,n-1);
	cout<<a[n-1]<<endl;
	//return;		
}

int main(){
	int n=7;
	int a[7]={1,2,3,4,5,6,7};
	inc(a,n);					//First printed from first to last
	cout<<endl;
	dec(a,n);					//Then printed from last to first 
	
	return 0;
}
