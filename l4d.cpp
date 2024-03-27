#include<iostream>
using namespace std;
int main()
{
    int j,i=1,n;
    cout<<"enter row number"<<endl;
    cin>>n;
    while(n>=i){
j=1;
while(j<=n){
    char a= 'A'+j+i-2;
    cout<<a;
    j++;
}
cout<<endl;
    i++;
    }
}
// ABCDEF
// BCDEFG
// CDEFGH
// DEFGHI
// EFGHIJ
// FGHIJK