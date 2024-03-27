#include<iostream>
using namespace std;
int main()
{
    int j,i=1,n;
    cout<<"enter row number"<<endl;
    cin>>n;
  while(i<=n){
    int sp=n-i+1;
   
while(sp<n){
    
    cout<<" ";
    sp++;
}

int nu=i-1;
while(nu<n){
    cout<<i;
    nu++;
}

i++;
cout<<endl;

  }

}
// 5
// 11111
//  2222
//   333
//    44
//     5