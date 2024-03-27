#include<iostream>
using namespace std;
int main()
{
    int j,i=1,n,m=0;
    cout<<"enter row number"<<endl;
    cin>>n;
    while(n>=i){
j=1;
while(j<=i){
    char a= 'A'+m;
    cout<<a;
    m++;
    j++;
}
cout<<endl;
    i++;
    }
}