/*
Here we have to calculate the maximum possible sum of a subarray considering it is a wrapping. That is, after the final element, we can again come back to 
the initial element.

We have used Kadane's algorithm to solve this. Look at maximumSubarraySum for further help on that algorithm.
We will condsider two cases --
1) Where the subarray elements are non-wrapping -> In this case, we will use our kadane's algo on our array.
2) Where the subarray elements are wrapping -> In this case, we will first reverse the signs of our array elements and then use kadane. Doing this, we will calculate
the maximum subarray sum of our non-contributing elements. We also store the total sum of our original array in a variable. Then, we do --
Max Subarray Sum = Total sum - Sum of non-contributing elements
Since after the sign reversal, the sum of non-contributing elements will change, thus we have--
Max Subarray Sum = Total sum - (- Sum of non-contributing elements)
or
Max Subarray Sum = Total sum + Sum of non-contributing elements
*/




#include<bits/stdc++.h>
#include<climits>
using namespace std;

int kadane(int a[],int n){
	int i,sum=0;
	int m=INT_MIN;
	for(i=0;i<n;i++){
		sum+=a[i];
		if(sum<0)
			sum=0;
		m=max(m,sum);
	}
	return m;
}

int main(){
	int n,i,k,m,sum,nonwrap,wrap;
	cout<<"Enter array length : "<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter array elements : "<<endl;
	for(k=0;k<n;k++){
		cin>>a[k];
	}

	nonwrap=kadane(a,n);	//Here we have found the sum of maximum subarray without considering wrapping

	sum=0;
	for(i=0;i<n;i++){
		sum+=a[i];
		a[i]=-a[i];			//The signs of the elements of the array are reversed
	}
	
	wrap=sum+kadane(a,n);	//Here we have found the sum of maximum subarray while considering wrapping
	m=max(nonwrap,wrap);	//After considering both sum of wrapping and non-wrappig subarrays, we see which is greater
	cout<<"Maximum Subarray Sum : "<<m;
	return 0;
}
