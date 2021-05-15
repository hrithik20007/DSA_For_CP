/*

    *       *
  *   *   *   *
*       *       *

*/


/*
I have divided the pattern into three sections and did each of them separately.

t t *     t t t *
t * t *     t *     t *        The 't' represents space(i.e. " ").
* t t t *         t t t *

*/
#include<iostream>
using namespace std;

int main(){

  int i,j,l,y,p;
  int k=1;
  int x=4;
  int q=0;

  for(i=1;i<=3;i++){
    for(j=2;j>=i;j--){
      cout<<"  ";
    }
    
    for(l=1;l<=k;l++){
      if(l==1 or l==k){
      	cout<<"* ";
      }
      else{
      	cout<<"  ";
      }
    }
    k+=2;
    
    for(y=x;y>=1;y--){
      if(y==1){
      	cout<<"* ";
      }
      else{
      	cout<<"  ";
      }
    }
    x-=2;
    
    for(y=1;y<=q;y++){
      if(y==q){
      	cout<<"* ";
      }
      else{
      	cout<<"  ";
      }
    }
    q+=2;
    
    cout<<endl;
  }  
}
