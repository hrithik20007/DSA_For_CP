/*
This program finds all the permutations of an input array (or vector). In this case, the vector contains duplicates.

We create a vector 'ans' containing vectors, which will store our answer. We create another vector 'a'. We input the size of the vector and the elements of the 
vector. We send it to the permute function as parameter and an index 0 (i.e. idx). In the permute function, if the index(idx) becomes equal to the length of the 
vector, we push the a vector into ans vector and return (base case). We start a for loop from the idx till the final element index. We swap the current index 
element with the idx element and send that vector in the recursive call, adding idx by 1. 

Basically, everything is same as permutations(), but we add an if statement, which prevents same characters from swapping. We also dont swap back to the original
vector after making the recursive call, otherwise similar permutations (or combinations) will pop up again. Actually, in that case same characters will be in
different places (which if characeters were unique would have been different), but with same characters in different opposite places, it will still give us the same
vector.

After permute function ends, we print the vectors.
*/





#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;

void permute(vector<int> a, int idx){
	int i;
	if(idx==a.size()){
		ans.push_back(a);
		return;
	}

	for(i=idx;i<a.size();i++){
		if(i!=idx && a[i]==a[idx])
			continue;
		swap(a[i],a[idx]);
		permute(a,idx+1);
		//swap(a[i],a[idx]);						//We don't swap back to the initial vector
	}
	return;
}

int main(){
	int n;
	cout<<"Enter the array size : "<<endl;
	cin>>n;
	vector<int> a(n);

	cout<<"Enter array elements : "<<endl;
	/*for(auto &i:a)								//Input-ing elements in a.
		cin>>i;*/

	for(int i=0;i<n;i++){							// " (Another Method)	
		cin>>a[i];
	}
	
	permute(a,0);

	/*												//This is the STL trick. If we do this, we won't need the permute() function.
	sort(a.begin(),a.end());
	do{
		ans.push_back(a);
	}while(next_permutation(a.begin(),a.end()));	//next_permutation() changes a vector to its next permutation. It continues until the elements are in decreasing 
													//order, which has no next permutation. We do 'do while' so as to include the first sorted vector.
	*/

	for(auto i:ans){								//Printing answer
		for(auto j:i){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
