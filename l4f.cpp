#include<iostream>
using namespace std;
int main()
{
    int j,i=1,n;
    cout<<"enter row number"<<endl;
    cin>>n;
    while(n>=i){
    j=1;char start='A'+n-i;
        while(j<=i){
    
    cout<<start;
    start++;
    j++;
}
cout<<endl;
    i++;
    }
}
// 6
// F
// EF
// DEF
// CDEF
// BCDEF
// ABCDEF