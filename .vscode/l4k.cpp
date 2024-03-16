// 6
// A
// BC
// CDE
// DEFG
// EFGHI
// FGHIJK
#include<iostream>
using namespace std;
int main(){
    cout<<"enter row number"<<endl;
    int i,j,n;
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        while(j<=i){
            char ch=('A'+i+j-2);
            cout<<ch;
            j++;
            
        }cout<<endl;i++;
    }
}