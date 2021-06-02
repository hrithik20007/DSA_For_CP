/*
Find the smallest positive number which is missing in the given array

Logic example:
a=[0,-9,1,3,-4,5]
b=[0,0,0,0,0,0] (However b's indexing starts from 1)

After implementing logic,
b=[1,0,1,0,1,0] as 1,3 and 5 are present. So b becomes 1 at their index.
Thus, smallest positive number not present is 2. As b=0 at index 2. 
*/




#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,j,k,f=0;
	cout<<"Enter array length : "<<endl;
	cin>>n;
	int a[n];
	int b[k];
	cout<<"Enter array elements : "<<endl;
	for(k=0;k<n;k++){	//Input array a. Array b's elements are initialised to 0 and its indexes represent the positive numbers we are looking for in array 'a'.
		cin>>a[k];
		b[k+1]=0;
	}
	
	for(i=0;i<n;i++){
		if(a[i]>=1 && a[i]<=n){
			b[a[i]]=1;			//Every element which is present is initialised to 1 at its index in b. Like if i is present, then b[i]=1.
		}
	}

	for(j=1;j<=n;j++){
		if(b[j]==0){
			cout<<"Smallest positive missing number is : "<<j;
			f=1;
			break;
		}
	}
	if(f==0)
		cout<<"No positive number missing";
	return 0;
}



/*
Another Method
Time Complexity is O(n^2)



#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,j,k,f=0,s=0;
	cout<<"Enter array length : "<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter array elements : "<<endl;
	for(k=0;k<n;k++){
		cin>>a[k];
	}
	for(i=1;i<=n;i++){
		f=0;
		for(j=0;j<n;j++){
			if(i==a[j]){
				f=1;
				break;
			}
		}
		if(f==0){
			s=i;
			break;
		}
	}
	if(s!=0)
		cout<<"Smallest positive missing number is : "<<s;
	else
		cout<<"No positive number missing";
	return 0;
}
*/
