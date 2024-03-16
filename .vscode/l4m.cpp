// 6
//      *
//     **
//    ***
//   ****
//  *****
// ******
#include<iostream>
using namespace std;
int main(){
    int j,i=1,n,sp,st;
    cout<<"enter row number"<<endl;
    cin>>n;
    while(i<=n){
          sp=n-i;
        while(sp){
           cout<<" ";
        sp--;}
        j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }cout<<endl;i++;
    }
}