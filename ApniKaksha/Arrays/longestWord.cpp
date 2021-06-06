//This program displays the word length of the largest word in a string.


#include<iostream>
#include<climits>
using namespace std;

int main(){
	int i,n,m=INT_MIN;
	bool f=1;
	cout<<"Enter string length"<<endl;
	cin>>n;
	cin.ignore();	//To clear input buffer. If we dont use this, then the next desired input will be occupied by the buffer of the previous variable. Thus we wont get
					//the desired output.
	
	cout<<"Enter string"<<endl;
	char c[n+1];
	cin.getline(c,n);		//Used to input strings which include whitespaces. Normally >> ignores the spaces, so we use getline() instead.
	cin.ignore();

	int len,l=0,r=0;

	//l holds the first index of a word while r holds its last index
	for(i=0;i<n;i++){;
		if((c[i]!=' ' && c[i+1]==' ') || i==(n-1)){
			r=i;
			len=r-l+1;
			m=max(m,len);
		}

		if(c[i]!=' ' && c[i-1]==' ')
			l=i;	
	}

	cout<<"Largest Word Length : "<<m;
	
	return 0;
}
