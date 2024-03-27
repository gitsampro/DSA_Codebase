#include<iostream>
using namespace std;
int main()
{
    int j,i=1,n;
    cout<<"enter row number"<<endl;
    cin>>n;
    while(n>=i){
j=1;
while(j<=i){
    char a= 'A'+i+j-2;
    cout<<a;
    j++;
}
cout<<endl;
    i++;
    }
}

// 6
// A
// BC
// CDE
// DEFG
// EFGHI
// FGHIJK