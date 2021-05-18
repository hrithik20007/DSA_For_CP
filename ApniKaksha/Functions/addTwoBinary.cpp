//Adding two binaries


#include<bits/stdc++.h>
using namespace std;

void binaryAdd(int x,int y){
	int d1,d2,d3=0,j,i=0,c=0;
	int binary[32];
	while(x>0 && y>0){
		d1=x%10;
		d2=y%10;
		d3=d1+d2+c;			//c is for carry
		if(d3==1 or d3==0)
			c=0;
		if(d3==2){
			d3=0;
			c=1;
		}
		if(d3==3){
			d3=1;
			c=1;
		}
		binary[i]=d3;
		i+=1;
		x=x/10;
		y=y/10;
	}

	//In case where x is larger than y
	if(x>0 && y==0 && c==1){
		while(x>0){
			d1=x%10;
			d2=d1+c;
			x=x/10;
			if(d2==1 or d2==0)
				c=0;
			if(d2==2){
				d2=0;
				c=1;
			}
			binary[i]=d2;
			i+=1;
		}		
	}

	//In case where y is larger than x
	if(x==0 && y>0 && c==1){
		while(y>0){
			d1=y%10;
			d2=d1+c;
			y=y/10;
			if(d2==1 or d2==0)
				c=0;
			if(d2==2){
				d2=0;
				c=1;
			}
			binary[i]=d2;
			i+=1;
		}		
	}

	//In case both have the same length but they still have a carry 1 when the while loop ends
	if(x==0 && y==0 && c==1){
		binary[i]=1;
		i+=1;
	}

	//For reversing the answer
	for(j=i-1;j>=0;j--){
		cout<<binary[j];
	}
	return;
}

int main(){
	int a,b;
	cout<<"Enter two binaries :"<<endl;
	cin>>a;
	cin>>b;
	binaryAdd(a,b);
	return 0;
}
