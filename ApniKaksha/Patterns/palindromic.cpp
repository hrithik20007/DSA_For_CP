/*
    1
   212
  32123
 4321234
543212345

*/



#include<iostream>
using namespace std;

int main(){
    int i,j,k,l;
    for(i=1;i<=5;i++){
        for(j=4;j>=i;j--){
            cout<<"  ";
        }
        for(k=i;k>=2;k--){
            cout<<k<<" ";
        }
        for(l=1;l<=i;l++){
            cout<<l<<" ";
        }
        cout<<endl;
    }

    return 0;
}
