/*
This program finds the maximum value of the items a thief can take in his knapsack, which has a weight limit. All the items also have a weight associated with them.

Logic:
We can either add or not add an item to the knapsack. If we add, we decrease the weight of the item from the weight limit and add the value of the item. We see that
V should be maximum by the end. i keeps track of the weight and value array as an iterator.
*/



#include<iostream>
#include<array>
using namespace std;

int knapsack(int w[], int v[], int W, int V,int i){
	if(W==0)									//We cannot add more valuables, thus we return at this point
		return V;
	if(W<0)										//As the weight of the last valuable exceeds the limit, we cannot add its value nor its weight
		return V-v[i-1];
	if(i==3)									//3 is the array size (In case where no valuables are left)
		return V;
		
	int r1=knapsack(w,v,W,V,i+1);				//Case where we don't add the item
	int r2=knapsack(w,v,W-w[i],V+v[i],i+1);		//Case where we do add the item

	return max(r1,r2);							//Maximum value of the total items
}

int main(){
	int w[]={10,20,30};							//Weight of the items
	int v[]={100,50,150};						//Value of the items
	int W=50;									//Weight limit of knapsack
	int V=0;									//Initial value of the item in knapsack (i.e. no item)
	cout<<knapsack(w,v,W,V,0)<<endl;
	return 0;
}
