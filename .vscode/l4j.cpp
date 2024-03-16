// 7

// A
// BC
// DEF
// GHIJ
// KLMNO


#include<iostream>
using namespace std;
int main(){
    cout<<"enter row number "<<endl;
    int i,j,n,p=0;
    cin>>n;
    i=1;
    while(i<n){
        j=1;
        while(j<i){
            char ch=('A'+p);
            cout<<ch;p++;
            j++;
        }cout<<endl;i++;
    }
}