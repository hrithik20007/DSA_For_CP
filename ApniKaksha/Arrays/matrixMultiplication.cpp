/*
In this program, we have multiplied two matrices. It is important to note that the column length of matrix1 should match with the row length of matrix2.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n1,n2,n3,k,k1,k2,k3,i,j;
	cout<<"Enter row length of 1st matrix : "<<endl;
	cin>>n1;
	cout<<"Enter column length of 1st matrix (also row length of second matrix): "<<endl;
	cin>>n2;
	cout<<"Enter column length of 2nd matrix : "<<endl;
	cin>>n3;
	int a[n1][n2];
	int b[n2][n3];
	int c[n1][n3];
	cout<<"Enter array1 elements : "<<endl;
	for(k1=0;k1<n1;k1++){
		for(k2=0;k2<n2;k2++){
			cin>>a[k1][k2];
		}
	}
	cout<<"Enter array2 elements : "<<endl;
	for(k1=0;k1<n2;k1++){
		for(k2=0;k2<n3;k2++){
			cin>>b[k1][k2];
		}
	}

	//Multiplying
	for(k1=0;k1<n1;k1++){
		for(k2=0;k2<n3;k2++){
			c[k1][k2]=0;
			for(k3=0;k3<n2;k3++){
				c[k1][k2]+=a[k1][k3]*b[k3][k2];
			}
		}
	}
	
	/*
	OR
	
	//Multiplying
	i=0;
	for(k1=0;k1<n1;k1++){
		k=0;
		j=0;
		while(k<n3){
			c[i][j]=0;
			for(k2=0;k2<n2;k2++){
				c[i][j]+=a[k1][k2]*b[k2][k];
			}
			k++;
			j++;
		}
		i++;
	}
	*/

	//Output matrix
	for(k1=0;k1<n1;k1++){
		for(k2=0;k2<n3;k2++){
			cout<<c[k1][k2]<<" ";
		}
		cout<<endl;
	}
		
	return 0;
}
