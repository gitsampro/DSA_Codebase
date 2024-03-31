#include<iostream>
using namespace std;
int main()
{
    int n,m,mask=0;
    cin>>n;
    m=n;
    while (m!=0)
    {
     mask=(mask<<1)|1;
     m=m>>1;
    }
    m=(~n);  & mask;
    cout<<"m original is "<<m<<" mask is "<<mask;
    
}