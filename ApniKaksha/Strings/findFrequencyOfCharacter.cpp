//The purpose of this program is to print the frequency of the character which occurs for the most number of times.




#include<iostream>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;

int main(){

	int i,m=INT_MIN;
	
	string s1="aaaaacccbbbbbbbdee";
	cout<<"Original : "<<s1<<endl;

	int f[26];								//This array will store the frequency of each alphabet in the string, even the ones which don't occur (i.e. 0)

	for(i=0;i<26;i++){						//Initialises all array elements to 0
		f[i]=0;
	}

	for(i=0;i<s1.size();i++){
		if(s1[i]>='a' && s1[i]<='z'){		
			f[s1[i]-'a']+=1;				//s1[i]-'a' will give us a number between 0-25. Essentially we are deducting one ASCII number from another.
		}
	}

	for(i=0;i<26;i++){						//m is updated to store the maximum frequency
		m=max(m,f[i]);
	}

	cout<<"Maximum Frequency : "<<m<<endl;
	return 0;
}
