/*

1
1 1
1 2 1
1 3 3 1
1 4 6 4 1

If we look closely, each element is formed by the comibination of the row no.(i) and column no.(j) , that is ^iCj.

*/




#include<iostream>
using namespace std;

int factorial(int n){
	int i;
	int f=1;
	if(n==0){
		return 1;
	}
	else{
		for(i=1;i<=n;i++){
			f=f*i;	
		}	
	}
	return f;
}

int main(){
	int i,j;
	for(i=0;i<=4;i++){
		for(j=0;j<=i;j++){
			cout<<factorial(i)/(factorial(j)*factorial(i-j))<<" ";
		}
		cout<<endl;
	}
	return 0;
}
