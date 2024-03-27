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
    char a= 'A'+j-1;
    cout<<a;
    j++;
}
cout<<endl;
    i++;
    }
}