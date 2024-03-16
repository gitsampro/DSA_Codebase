//pattern 10 in video
// 5
// A
// BB
// CCC
// DDDD
// EEEEE


#include<iostream>
using namespace std;
int main(){
cout<<"enter number of rows"<<endl;
int n,i,j;
char ch;
cin>>n;
i=1;
while(i<=n){
    j=1;
    while(j<=i){
        ch=('A'+i-1);
        cout<<ch;
        j++;

    }cout<<endl; i++;
}
}