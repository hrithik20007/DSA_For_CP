/*
Insertion Sort

Works on the logic to insert an element at its correct position when the iterator comes across it, pushing the other elements by 1
place.

Example: 
12 45 23 51 19 8

Our Work:
12 45 23 51 19 8  Checked b/w 12
12 45 23 51 19 8  Checked b/w 12,45
12 23 45 51 19 8  Checked b/w 12,45,23 (condition activtes)
12 23 45 51 19 8  Checked b/w 12,23,45,51
12 19 23 45 51 8  Checked b/w 12,23,45,51,19 (conditon activates)
8 12 19 23 45 51  Checked b/w 12,19,23,45,51,8 (conditon activates)

We take the i b/w 1 to n. So when i becomes smaller than its preceeding element, we iterate back to find where it should be inserted,
so that the array can be in ascending order upto i. We, then push the following elements by 1 place.
*/



#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,j,k,current=0,t=0,n;
	cout<<"Enter array length : "<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter array elements : "<<endl;
	for(k=0;k<n;k++){
		cin>>a[k];
	}
	for(i=1;i<n;i++){
		j=i-1;
		current=a[i];  //Since after the first a[j+1]=a[j], a[i] becomes the value of a[j].
		while(j>=0 && current<a[j]){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=current;	//Since we want to insert our element after a[j],from which a[i] is larger
	}
	/*
	OR

	for(i=1;i<n;i++){
		j=i;
		while(j>=1){
			if (a[j]<a[j-1]){
				t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
			j--;
		}
	}
	*/
	for(k=0;k<n;k++){
		cout<<a[k]<<" ";
	}
	return 0;
}
