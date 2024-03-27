#include<iostream>
using namespace std;
int main()
{
    int j,i=1,n;
    cout<<"enter row number"<<endl;
    cin>>n;
  while(i<=n){
    
   int k=1;
while(k<=i-1){
    
    cout<<"*";
    k++;
}

int j=1,s=i;
while(j<=n-i+1){
    cout<<s;
    s++;
    j++;
}

i++;
cout<<endl;

  }

}