/*
Output the index of the first occurence of an element which repeats in an array.

For example:
Input: [1,5,3,4,3,5,6]
Output: 1 
Explaination: As 5 repeats in the array and is present at index 1 (less than index 2 of 3).
*/




#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,j,k,p=0;
	cout<<"Enter array length : "<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter array elements : "<<endl;
	for(k=0;k<n;k++){
		cin>>a[k];
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				p=i;
				break;
			}
		}
		if(p!=0)
			break;
	}
	cout<<"Required Index : "<<p;
	return 0;
}


/*
Another way : But only if the array elements are <= the array size.
If a = [1,5,3,4,3,5,6]
then b will look like = [-1,-1,-1,2,3,1,6,-1].. i.e. the elements of b are the index of elements of a, at the index of b.
Like, at b's index 5, the element of b is the index of 5 at a.
See the code for better understanding.


#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,j,k,m=INT_MAX;
	cout<<"Enter array length : "<<endl;
	cin>>n;
	int a[n];
	int b[n+1];
	cout<<"Enter array elements : "<<endl;
	for(k=0;k<n;k++){
		cin>>a[k];
	}

	for(k=0;k<=n;k++){
		b[k]=-1;
	}
		
	for(i=0;i<n;i++){
		if(b[a[i]]==-1)
			b[a[i]]=i;
		else{
			m=min(m,b[a[i]]);
		}
	}
	cout<<"Required Index : "<<m;
	return 0;
}
*/
