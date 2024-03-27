#include<iostream>
using namespace std;
int main()
{
    int j,i=1,n;
    cout<<"enter row number"<<endl;
    cin>>n;
  while(i<=n){
    
   int k=1;
while(k<=n-i){
    
    cout<<"*";
    k++;
}

int j=1;
while(j<=i){
    cout<<i;
    j++;
}

i++;
cout<<endl;

  }

}
// 6
// *****1
// ****22
// ***333
// **4444
// *55555
// 666666