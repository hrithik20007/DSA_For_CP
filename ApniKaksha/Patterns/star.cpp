/*

      *
    * * *
  * * * * *
* * * * * * *
  * * * * *
    * * *
      *
      
*/

#include<iostream>
using namespace std;

int main(){

  int i,j,l;
  int k=1;

  for(i=1;i<=4;i++){
    for(j=3;j>=i;j--){
      cout<<"  ";
    }
    for(l=1;l<=k;l++){
      cout<<"* ";
    }
    k+=2;
    cout<<endl;
  }

  k-=4;	               //Since k, after coming out from the previous loop has value 9. But we will start from 5 and decease it by 2.
  for(i=1;i<=3;i++){
      for(j=1;j<=i;j++){
        cout<<"  ";
      }
      for(l=1;l<=k;l++){
        cout<<"* ";
      }
      k-=2;
      cout<<endl;
    }
}
