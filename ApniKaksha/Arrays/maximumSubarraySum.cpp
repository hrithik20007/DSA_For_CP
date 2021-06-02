/*
We have to print the maximum sum of all the element(s) of a subarray, from the given array.

We can solve this using three methods-
1) Brute Force - Uses O(n^3) [We will skip this approach]

2) Cumulative Sum Approach - Uses O(n^2)  --> An array b stores the cumulative sum of array a elements. We maintain two pointers. We will decrease a portion of b
											  from b so as to get the maximum subarray sum. We will output the max cumulative total at any given point.

3) Kadane's Algorithm - Uses O(n)	--> A sum variable is maintained for calculating cumulative total until a particular iteration. If a -ve value is found
										we update that to 0. We will output the max cumulative total at any given point.
*/



//Kadane's Algorithm
#include<bits/stdc++.h>
#include<climits>
using namespace std;

int main(){
	int n,i,k,m,sum;
	cout<<"Enter array length : "<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter array elements : "<<endl;
	for(k=0;k<n;k++){
		cin>>a[k];
	}
	/*
	int b[n];
	b[0]=a[0];
	if(b[0]<0)
		b[0]=0;
	m=b[0];								//We can use a second array instead to store sum but that isn't necessary
	for(i=1;i<n;i++){
		b[i]=b[i-1]+a[i];
		if(b[i]<0)
			b[i]=0;
		m=max(m,b[i]);
	}
	*/
	sum=0;
	m=INT_MIN;
	for(i=0;i<n;i++){
		sum+=a[i];
		if(sum<0)
			sum=0;
		m=max(m,sum);
	}
	
	cout<<"Maximum Subarray Sum : "<<m;
	return 0;
}



/*
Cumulative Sum Approach


#include<bits/stdc++.h>
#include<climits>
using namespace std;

int main(){
	int n,i,j,k,m=INT_MIN,sum;
	cout<<"Enter array length : "<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter array elements : "<<endl;
	for(k=0;k<n;k++){
		cin>>a[k];
	}
	int b[n+1];		
	b[0]=0;			#We initialise first element as 0 so that we can decrease that for sum calculation (In case we dont need to subtract any value).
	for(i=1;i<=n;i++){
		b[i]=b[i-1]+a[i-1];
	}

	for(i=1;i<=n;i++){
		sum=0;
		for(j=0;j<=i;j++){
			sum=b[i]-b[j];
			m=max(m,sum);
		}
	}
	
	cout<<"Maximum Subarray Sum : "<<m;
	return 0;
}
*/
